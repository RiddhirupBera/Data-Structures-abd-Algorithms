#include<bits/stdc++.h>
using namespace std;
int t[4][51];

int main(){
	int i,j;
	for(i=0;i<4;i++)
	for(j=0;j<=50;j++){
		if(i==0 || j==0)t[i][j]=0;
		
	}
	int val[] = {60,100,120},wt[] = {10,20,30},w=50;
	
	for(i=1;i<4;i++)
		for(j=1;j<=50;j++){
			if(wt[i-1]<=j)
			t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
			else t[i][j] = t[i-1][j];
		}
	cout<<t[3][w];

}