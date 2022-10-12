#include<bits/stdc++.h>

using namespace std;


int getintlength(long number){
    int i{};
    while(number > 0){
        number /= 10;
        i++;
    }
    return i;
}

int main(){
    int k;
    cin >> k;
    int i{};
    long res;
    while(true){
        res = pow(5, i);
        k -= getintlength(res);
      
        if(k <= 0){
            cout << (static_cast<int>(res/(pow(10, -k)))%10);
            return 0;
        }
        i++;
    }
}

//string
