#include<bits/stdc++.h>
using namespace std;
int main(){
	int w=11,val[]={1,2,7,12},i,j;
	int n=sizeof(val)/sizeof(val[0]);
	bool t[n+1][w+1];
	
	w = accumulate(val,val+n,0);
	for(i=0;i<=w;i++)t[0][i]=false;
	for(i=0;i<=n;i++)t[i][0]=true;	

	for(i=1;i<=n;i++)
		for(j=1;j<=w;j++)
		{
			if(val[i-1]<=j)
			{
				t[i][j] = (t[i-1][j-val[i-1]])||(t[i-1][j]);
			}
			else{
				t[i][j] = t[i-1][j];
			}
		}

	for(i=0;i<=w;i++)cout<<t[n][i]<<" ";
	cout<<"\n";
		int mn = INT_MAX;
	for(i=0;i<=(w/2);i++){
		if(t[n][i]==1)
		mn = min(mn,w-(2*i));
	}
	cout<<mn;
	//cout<<t[n][w];
	cout<<"\n";
}