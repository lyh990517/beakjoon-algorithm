#include<iostream>
using namespace std;
int main(){
	int n,i,flugCnt,multiTap,AbleFlug;
	flugCnt = 0;
	AbleFlug =0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> multiTap;
		flugCnt += multiTap; 
	}
	AbleFlug = flugCnt - n + 1;
	cout << AbleFlug;
	return 0;
}
