#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    int res=1;
    for(int i=1;i<n+1;i++) res *= i;
    return res; 
}

void power(double *num, int po){
    double temp = (*num);
    for(int i=0; i < po-1;i++) (*num) *= temp;
}



int main(){
    double x;
    cin >> x;
    double res{};
    for(int k=1;k < 10;k++){
        power(&x, 2*k+1);
        res+= ((-1)*(k%2) * x)/(fact(k) * (2*k+1));
    }
    cout << res;
    return 0;
}