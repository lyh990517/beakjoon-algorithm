#include<iostream>
using namespace std;
int main(){
	int x,y,w,h,min,Xm,Ym;
	cin >> x >> y >> w >> h;
	Xm = w - x > x ? x : w - x;
	Ym = h - y > y ? y : h - y;
	min = Xm > Ym ? Ym : Xm;
	cout << min;
	return 0;
}


