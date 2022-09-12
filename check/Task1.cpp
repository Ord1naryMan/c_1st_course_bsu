#include<bits/stdc++.h>

using ll = long long;
using ld = float;

using namespace std;


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


int main(){
	ld q, b, c, d, y=0, x, z;
	string tmp;
	cout << "Enter x";
	x = ins();
	while (!y){
		y=0;
	cout << "Enter y";
	y = ins();
	if (y<=0) y =0;
	}
	cout << "Enter z";
	z = ins();
	
	cout << "x=" << x << "\ny=" << y << "\nz=" << z << "\n";
	q = exp(abs(x-y)) * pow(abs(x-y),(x+y));
	b = atan(x) + atan(z);
	c = pow(x,6) + 2*log(y);
	d = pow(c, (1./3));
	if (b == 0) cout << "ZeroDivisionError";
	cout << q/b+d;
	
	
	return 0;
}

