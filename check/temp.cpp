#include<bits/stdc++.h>


using ll = long long;
using namespace std;

int main() {

	string input;
	
	ll x;

	cout << "Enter x:";
	while (!x) {
		cin >> input;
		for (auto& x : input) cout << x;
		x = 1;
	}

	return 0;
}