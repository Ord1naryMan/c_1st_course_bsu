

#include <iostream>
#include<cmath>
#include<string>
#include<algorithm>


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

int main()
{
	double x, y, z, a, b, c, d, e, g;
	cout << "x = "; x = ins();
	cout << "y = "; y = ins();
	cout << "z = "; z = ins();
	a = pow(y, (x + 1));
	b = pow(fabs(y - 2), 1 / 3) + 3;
	c = x + y / 2;
	d = 2 * fabs(x + y);
	e = pow((x + 1), -(1 / sin(z)));
	g = a / b + (c / d)*e;
	
		cout << "result = " << g << endl;
	if (b==0 || d==0 || sin(z)==0)
	{
		cout << "ZeroDivisionError" << endl;
	}
	return 0;
}

