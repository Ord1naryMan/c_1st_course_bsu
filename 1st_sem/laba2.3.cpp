#include <bits/stdc++.h>
using namespace std;

pair<bool, int> read_cin(const string &invitation)
{
	bool result{};
	int value{};

	cout << invitation << ": ";
	result = (cin >> value).good();
	return {result, value};
}

bool is_odd(int i){
    if(i == 1) return true;
    if(i==2) return true;
    if(i%2 == 0) return false;
    for(int j=3;j<i/2;j+=2){
        if(i%j==0) return false;
    }
    return true;
    
}
int main(){
    auto [n_res, n] =  read_cin("n");
    if(!n_res){
        cout << "invalid input";
        return 1;
    }

    cout << "1 ";
    if(!(n%2)) 
        cout << "2 ";
    for(int i=3;i<n/2;i+=2){
        if(n%i==0 && is_odd(i)) 
            cout << i << " ";
    }
    return 0;
}