#include<bits/stdc++.h>

using namespace std;

int main(){
    long a, n;
    int *A, *B, *C, length, l,cc;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> n;
    int size_a = to_string(a).size(), size_n = to_string(n).size();
    A=new int [size_a];
    B=new int [size_n];

    for (int i=0; i<size_a; i++){
        A[i]=a%10;
        a /= 10;
    }
    for (int i=0; i<size_n; i++){
        B[i]=n%10;
        n /= 10;
    }
    length = size_a + size_n - 1 ;
    l=length;
    C=new int [length];
    fill(C, C+length, 0);

    for (int i = 0; i < size_a; i++){
        for (int j = 0; j < size_n; j++){
            C[i + j] += A[i] * B[j];
        }
    }

    for (int i = 0; i < length-1; i++){
        C[i + 1] +=  C[i] / 10;
        C[i] %= 10;
    }

    while (C[length] == 0)
        length-- ;
    for(int i=length; i>-1; i--)
        cout<<C[i];
    return 0;
}
