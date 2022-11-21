#include <bits/stdc++.h>
using namespace std;


int main()
{
    //TODO: без string
    double num;
    cout << "n: ";
    cin >> num;
    
	int k;
	cout << "k: ";
	cin >> k;

    int counter{};
    while(k){
        if(int(num*10)%10 == 9) counter++;
        num*=10;
        k--; 
    }
    cout << counter;
    
    return 0;
}