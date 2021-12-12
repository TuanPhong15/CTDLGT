#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

int dem = 0;

Node *createNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
vector<int> A;
vector<int> v1;

Node *avlTree(Node *node, int left, int right)
{
    int mid = (left + right) >> 1;
    node = createNode(A[mid]);
    if (left < mid)
        node->left = avlTree(node->left, left, mid - 1);
    if (right > mid)
        node->right = avlTree(node->right, mid + 1, right);
    return node;
}

void check(Node *node, int n)
{
    dem++;
    if (node == NULL)
        return;

    check(node->left, n);
    check(node->right, n);
    v1.push_back(node->data);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        A.clear();
        A.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        Node *node = NULL;
        node = avlTree(node, 0, n - 1);
        check(node, n);
        for (int i = 0; i < v1.size(); i++)
        {
            if (i < v1.size() - 1)
            {
                cout << v1[i] << ",";
            }
            else
                cout << v1[i];
        }

        cout << endl;
        v1.clear();
    }
}