#include<bits/stdc++.h>
using namespace std;
const int length = 10;

void del(char *st, int pos, int n){
    //TODO: выполнить без выделения промежуточных массивов
    
    for(int i=pos, j =pos+n; st[i] != '\0';i++, j++){
        st[i] = st[j];
    }
}


int main(){
    char st[length]{};
    cin.getline(st, length);
    
    for(int i=0; st[i+2] != '\0'; i++) {
        if(st[i] == st[i+1] && st[i] == st[i+2]) {
            del(st, i, 3);
        }
    }
    cout << st;
    return 0;
}
