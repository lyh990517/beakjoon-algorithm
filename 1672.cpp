#include<iostream>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
char dna[4][4] = {{'A','C','A','G'},{'C','G','T','A'},{'A','T','C','G'},{'G','A','G','T'}};
vector<char> v;
int main(){
	int A=0,G=1,C=2,T=3;
	int i,n,Bn,Bn_1;
	char An,An_1,temp;
	string Dna;
	cin >> n;
	cin >> Dna;
	for(i=0;i<n;i++) v.push_back(Dna[i]);
	while(v.size() != 1){
		An = v[v.size() - 1];
		An_1 = v[v.size() -2];
		if(An == 'A') Bn = A;
		if(An_1 == 'A') Bn_1 = A;
		if(An == 'G') Bn = G;
		if(An_1 == 'G') Bn_1 = G;
		if(An == 'C') Bn = C;
		if(An_1 == 'C') Bn_1 = C;
		if(An == 'T') Bn = T;
		if(An_1 == 'T') Bn_1 = T;
		v.pop_back();
		v.pop_back();
		temp = dna[Bn][Bn_1];
		v.push_back(temp);
	}
	cout << v.front();
	return 0;
}

