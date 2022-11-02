#include<bits/stdc++.h>

using namespace std;

int digit_count(long num){
  int count = 1;
  while(num/=10){
      count++;
  }
  return count;
}

std::pair<int, int*> num2arr(long num){
   int size_num = digit_count(num);
   int *result=new int [size_num];
    for (int i=0; i<size_num; i++){
        result[i]=num%10;
        num /= 10;
    }
   return {size_num, result};
}

int main(){
    long a, n;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> n;
    
 
    auto [size_a, A] = num2arr(a);
    auto [size_n, N] = num2arr(n);
    
    int length = size_a + size_n - 1;
    int* C=new int [length]{};
    
    for (int i = 0; i < size_a; i++){
        for (int j = 0; j < size_n; j++){
            C[i + j] += A[i] * N[j];
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
