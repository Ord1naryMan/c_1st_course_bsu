#include <bits/stdc++.h>
using namespace std;

int get(int* a, int i, int j, int n){
  if(j<i) return 0;
  return  a[i*n-i*(i-1)/2+(j-i)];
}
int& get_r(int* a, int i, int j, int n){
  return  a[i*n-i*(i-1)/2+(j-i)];
}

//как в квадрат
void show(int* a, int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++)
            cout <<setw(5)<< get(a, i, j, len);
        cout << endl;
    }
}



int main(){
    int n, length{} , zeros{}, j{}, aij, aji;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1;i<n+1;i++)
        length += i;
    int *a = new int [length]{};
    int *vec = new int [n];
    int *res = new int [n]{};
    int *square_a = new int [length]{};
    
    cout << "enter matrix: \n";
    for(int i = 0; i < length;i++){
            cin >> a[i];
        }
    cout << "Enter a vector: ";
    for(int i=0;i<n;i++) cin >> vec[i];


    cout << "your matrix:\n";
    show(a, n);
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
           for (int k=0;k<n;k++){
               aij = get(a, i, k, n);
               aji = get(a,k, j, n);
               get_r(square_a, i,j,n) += aij * aji;
           }
        
    }

    cout << "\nsquare of your matrix:\n";
    show(square_a, n);

    
    //a*vector start
    for(int i=0;i<length;i++){
        
        res[zeros] += square_a[i] * vec[j++];
    
        
        if(j%n == 0 && j!= 0){
            zeros++;
            j = zeros;
        }
    }
    //a*vector end
    cout << "\nanswer:\n";
    for(int i=0;i<n;i++) cout << res[i] << " ";
    return 0;
}













