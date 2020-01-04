#include<iostream>
#include<string.h>
using namespace std;
int tiling(int n);
int dp[1001];
int main(){
	memset(dp,-1,sizeof(dp));
	int n;
	cin >> n;
	cout << tiling(n);
	return 0;
}
int tiling(int n){
	int i;
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(dp[n] != -1) return dp[n];
	dp[n] = tiling(n-1) + tiling(n-2);
	return dp[n]%10007;
	
}
