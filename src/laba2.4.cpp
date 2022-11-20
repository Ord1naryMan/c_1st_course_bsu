#include<bits/stdc++.h>


using namespace std;

int main(){
    int num, num1{}, out{}, answer{};
    bool first_iter{true};
    //cout << "enter 0 at the and of the line and pls do not use 0 in ur input\n";
    while (cin >> num){
        
        if (first_iter) {
            num1 = num; 
            first_iter = false;
        }

        if(num1 > num) 
            out++;
        else {
            answer = std::max(answer, out);
            out = 0;
        }
        
         num1 = num;
    }
    cout << std::max(answer, out);
    return 0;
}
