#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-6;

int fact(int n){
    int res=1;
    for(int i=1;i<n+1;i++) 
        res *= i;
    return res; 
}

void power(double *num, int po){
    double temp = (*num);
    for(int i=0; i < po-1;i++) 
        (*num) *= temp;
}

 
//TODO:считается не 10 раз, а с точностью epsilon

int main(){
    double x;
    cin >> x;
    double res{}, prev{};
    int k{1};

    do{
        prev = res;
        power(&x, 2*k+1);
        res+= ((-1)*(k%2) * x)/(double)(fact(k) * (2*k+1));
        k++;
        
    }while((res - prev) > eps);
    cout << res << " sl:" << k;
    return 0;
}
