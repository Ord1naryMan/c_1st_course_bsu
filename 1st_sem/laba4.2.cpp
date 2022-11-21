#include <algorithm>
#include<iostream>
#include <cstring>          //обработка неполных
using namespace std;

char num2hex(int hex){
       if(hex<10)
            return hex+'0';
        else
            return hex+('A' - 10);
}

int str2quad(char* arr, int start, int end){
    int hex = 0;
    for(int j = start;j<end;j++){
        hex <<= 1;
        hex += arr[j] == '1';
    }
    return hex;
}


int main()
{
    int  k = 0;
    char hexDecNum[20]{};
    char binaryNumS[20]{};
 
    cout<<"Enter any Binary Number: ";
    cin.getline(binaryNumS, sizeof(binaryNumS));
    int len = strlen(binaryNumS);
    int ost = len%4;
    
    for(int i=len-4;i>=0;i-=4)
    {
        hexDecNum[k++] = num2hex(str2quad(binaryNumS,i,i+4));
    }
    
    if(ost)
        hexDecNum[k++] = num2hex(str2quad(binaryNumS,0,ost));
   
    cout<<"\nEquivalent Value in Hexadecimal: ";
    reverse(begin(hexDecNum), begin(hexDecNum)+strlen(hexDecNum));
    cout<<"0x"<<hexDecNum;
    return 0;
}


