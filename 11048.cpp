#include<iostream>
#include<string.h>
using namespace std;
int bigger(int a,int b);
int max(int a,int b,int c);
int dp[1001][1001];
int p[1001][1001];
int n,m;
int main(){
	memset(dp,0,sizeof(dp));
	int i,j,sum=0;
	cin >> n >> m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin >> p[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			sum = max(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
			dp[i][j] = sum + p[i][j]; 
		}
	}
	cout << dp[n][m];
	return 0;
}
int max(int a,int b,int c){
	return a > b ? a > c ? a : c : b > c ? b : c;
}
int bigger(int a,int b){
	return a > b ? a : b;
}


