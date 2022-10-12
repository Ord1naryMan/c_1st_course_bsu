#include<bits/stdc++.h>
using namespace std;


int main(){
    int dec{};
    string a, temp;
    cin >> a;
    while(a.size() > 0){
        if (temp.assign(a, 0, 1) == "M") {dec += 1000; a.assign(a, 1, a.size()-1);}
        else if (temp.assign(a, 0, 2) == "CM") {dec += 900; a.assign(a, 2, a.size()-2);}
        else if (temp.assign(a, 0, 1) == "D") {dec += 500; a.assign(a, 1, a.size()-1);}
        else if (temp.assign(a, 0, 2) == "CD") {dec += 400; a.assign(a, 2, a.size()-2);}
        else if (temp.assign(a, 0, 1) == "C") {dec += 100; a.assign(a, 1, a.size()-1);}
        else if (temp.assign(a, 0, 2) == "XC") {dec += 90; a.assign(a, 2, a.size()-2);}
        else if (temp.assign(a, 0, 1) == "L") {dec += 50; a.assign(a, 1, a.size()-1);}
        else if (temp.assign(a, 0, 2) == "XL") {dec += 40; a.assign(a, 2, a.size()-2);}
        else if (temp.assign(a, 0, 1) == "X") {dec += 10; a.assign(a, 1, a.size()-1);}
        else if (temp.assign(a, 0, 2) == "IX") {dec += 9; a.assign(a, 2, a.size()-2);}
        else if (temp.assign(a, 0, 1) == "V") {dec += 5; a.assign(a, 1, a.size()-1);}
        else if (temp.assign(a, 0, 2) == "IV") {dec += 4; a.assign(a, 2, a.size()-2);}
        else if (temp.assign(a, 0, 1) == "I") {dec += 1; a.assign(a, 1, a.size()-1);}
        else{
            cout << "wrong letters";
            return 0;
        }
     }
    cout << dec;
    return 0;
}
