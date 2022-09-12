#include<bits/stdc++.h>

using namespace std;
using ld = float;

ld ins(){
	cout << ">";
	ld a = 0;
	int is_min = 1;
	
	string s1, tmp, temp, temp1;
	
	cin >> s1;
	if (temp.assign(s1,0,1) == "-") {is_min = -1;
	s1 = "0" + temp.assign(s1,1,s1.size()-1);}
	else s1 = "0" + s1;
	a = stof(s1);
	
	if (a == 0 && s1 !="00") {a = ins(); return a;}
	tmp = to_string(a);
	
	sort(s1.begin(), s1.end());
	sort(tmp.begin(), tmp.end());
	
	if (temp.assign(s1, s1.size()-1, 1) == temp1.assign(tmp, tmp.size()-1, 1)) return a*is_min;
	
	else {a = ins(); return a;}
	
	
	
	
	return a*is_min;
}


ld maxx(ld a, ld b){
	return (a > b) ? a :b;
}

ld minn(ld a,ld b){
	return (a < b) ? a :b;
}

int main(){
	ld a, b, x=0, y=0, z=0;
	cout << "Enter x";
	x = ins();
	while (!y){
	cout << "Enter y";
	y = ins();
	}
	while (!z){
	cout << "Enter z";
	z = ins();
	}
	ld q, w, e;
	q = x+y+z;
	w = x*y*z;
	e = x/(y*z);
	
	
	
	a = maxx(q, w);
	b = maxx(q, e);
	if (b == 0) {cout << "ZeroDivision"; return 0;}
	cout << a/b;

	return 0;
}