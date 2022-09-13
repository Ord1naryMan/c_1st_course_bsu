#include<bits/stdc++.h>

using namespace std;

int main(){
	string a;
	int b;
	bool is_runing = true;
	while (is_runing){
		cin >> a;
		if(a == "1"){
			b = 1;
			is_runing = false;
		}
		else if(a == "2"){
			b = 2;
			is_runing = false;
		}
		else if(a == "3"){
			b = 3;
			is_runing = false;
		}
		}
	cout << b;
	return 0;
}