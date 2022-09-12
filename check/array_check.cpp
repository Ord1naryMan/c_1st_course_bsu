/*
using ll = long long;
using ld = long double;
#define f(i,a,b) for(int i = a; i < b; i++)
#define vi vector<int>
#define vd vector<double>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvd vector<vectordouble>>
#define fr(x,v) for(auto& x : v)
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	

	int num;
	cin >> num;
	vector<int> a(num);
	for(auto& x : a){
		cin >>x;
	}
	sort(a.begin(), a.end());
	for(auto& x : a){
		cout << x << " ";
	}
	
	cout <<"\n" << a[0];
	
	return 0;
}


//cout << setprecision(10) << fixed;

