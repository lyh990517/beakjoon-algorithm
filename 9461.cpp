#include<iostream>
#include<string.h>
using namespace std;
long long dp[101];
long long wave(int n);
int main(){
	int t,n[101],i;
	memset(dp,-1,sizeof(dp));
	cin >> t;
	for(i=1;i<=t;i++) cin >> n[i];
	for(i=1;i<=t;i++) cout << wave(n[i]) << endl;
	return 0;
}
long long wave(int n){
	if(n<0) return 0;
	if(dp[n] != -1) return dp[n];
	if(n == 1) return 1;
	if(n == 2) return 1;
	if(n == 3) return 1;
	if(n == 4) return 2;
	if(n == 5) return 2;
	if(n == 6) return 3;
	dp[n] = wave(n-5) + wave(n-1);
	return dp[n];
}
