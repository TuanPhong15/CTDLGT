#include<bits/stdc++.h>
using namespace std;
int find(int par[],int dist[],int n,int s){
	int min=0,i;
	for(i=0;i<n;i++){
		if(par[i]!=s){
			min=i;break;
		}
	}
	for(;i<n;i++){
		if(par[i]!=s&&dist[i]<dist[min])
		 min=i;
	}
	par[min]=s;
	return min;
}
int main(){
	int n,m,s;
	cout<<"Enter no of vertices and edges:";
	cin>>n>>m;
	int cost[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) cost[i][j]=0;
			else
			 cost[i][j]=INT_MAX;
		}
	}
	cout<<"Enter costs:\n";
	for(int i=0;i<m;i++){
		int u,w,c;
		cin>>u>>w>>c;
		cost[u][w]=c;
	}
	int dist[n],par[n];
	cout<<"Enter start node:";
	cin>>s;
	for(int i=0;i<n;i++){
		par[i]=-1;
		dist[i]=INT_MAX;
		if(cost[s][i]<dist[i])
		 dist[i]=cost[s][i];
	}
	par[s]=s;
	int i=0;
	while(i<n-1){
		int j=find(par,dist,n,s);
		//cout<<j<<endl;
		for(int x=0;x<n;x++){
			if(par[x]!=s&&dist[j]!=INT_MAX&&cost[j][x]!=INT_MAX&&dist[x]>(dist[j]+cost[j][x])){
			
			  dist[x]=dist[j]+cost[j][x];
		    }
        }
		i++;
	}
	for(int i=0;i<n;i++)
		cout<<dist[i]<<" ";
	cout<<endl;
	return 0;
	
}