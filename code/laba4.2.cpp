#include<bits/stdc++.h>
using namespace std;

int main(){
    string bin, hex= "", temp;
    int dec;
    cin >> bin;
    if(bin.length()%4 == 1) bin = "000" + bin;
    else if(bin.length()%4 == 2) bin = "00" + bin;
    else if(bin.length()%4 == 3) bin = "0" + bin;
    for(int i=0;i<bin.length();i+=4){
        temp.assign(bin, i, 4);
        dec = 1*(temp[3] == '1') + 2*(temp[2]== '1') + 4*(temp[1]== '1') + 8*(temp[0]== '1');
         hex += (dec <10) ?  ('0' + dec) : ('A' + dec%10);
    }
    cout << hex;
    return 0;
}
