#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,u,v,wt;

	cin>>n>>m;
	
	//ADJACENCY MATRIX
	int adj[n+1][n+1];
	for(i=0;i<m;i++){
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
	//ADJACENCY LIST
	vector<int>adj1[n+1];
	for(i=0;i<m;i++){
		cin>>u>>v;
		adj1[u].push_back(v);
		adj1[v].push_back(u);
	}
	//ADJACENCY LIST FOR WEIGHTED GRAPH
	vector<pair<int,int>>adj1[n+1];
	for(i=0;i<m;i++){
		cin>>u>>v>>wt;
		adj1[u].push_back({v,wt});
		adj1[v].push_back({u,wt});
	}
}