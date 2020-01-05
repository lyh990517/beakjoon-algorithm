#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>guys;
int main(){
	int i,j,n,k,sum = 0;
	for(i=0;i<9;i++){
		cin >> n;
		guys.push_back(n);
		sum += guys[i];
	}
	k = sum;
	for(i=0;i<guys.size()-1;i++){
		for(j=i+1;j<guys.size();j++){
			sum = sum - guys[i] - guys[j];
			if(sum == 100 && i != j){
				guys.erase(guys.begin()+j);
				guys.erase(guys.begin()+i);
				break;
			}
			sum = k;
		}
	}
	sort(guys.begin(),guys.end());
	for(i=0;i<7;i++){
		cout << guys[i] << endl;
	}
	return 0;
}


