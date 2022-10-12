#include<bits/stdc++.h>
using namespace std;

union value{
    float f;
    struct{
        unsigned mant : 23;
        unsigned exp : 8;//степень 10
        unsigned sign : 1;
    };
};

int main(){
    value in;
    cin >> in.f;

    cout << in.f << " " << in.mant << " " << in.exp << " " << in.sign;
    return 0;
}