#include<bits/stdc++.h>
using namespace std;
const int length = 100;

void del(char *st, int pos, int n){
    char temp[length];
    fill(temp, temp+length, 4);
    int j=0;
    for(int i=0; (st[i] != 4);i++){
        if(i < pos || i >= pos+n){
            temp[j] = st[i];
            j++;
        }
    }
    fill(st, st+length, 4);
    for(int i=0;(temp[i] != 4);i++)
        st[i] = temp[i];
    return;
}


int main(){
    char st[length];
    fill(st, st+length, 4);
    cin.getline(st, length);
    for(int i=0;(st[i+2] != 4); i++) 
        if(st[i] == st[i+1] && st[i] == st[i+2]) 
            del(st, i, 3);
    cout << st;
    return 0;
}
