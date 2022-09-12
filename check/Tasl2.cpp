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




int main(){
	ld x, a, c, z, q, w, e, q1, q2;
	cout << "Enter a";
	a = ins();
	cout << "Enter c";
	c = ins();
	cout << "Enter z";
	z = ins();
	if(z <0) cout << "z < 0\n";
	else cout << "z > 0\n";
	if (z > 0) x = 2*z+1;
	else x = log(z*z-z);
	q = pow(sin(2*x),2);
	q1 = pow(sin(x*x),2);
	q2 = pow(sin(x/3),2);
	w = a*pow(cos(x*x*x),5);
	e = c*log(pow(x,2./5));
	cout << "2x: " << q+w+e << "\nx*x: " << q1+w+e << "\nx/3: " << q2+w+e;

	return 0;

}