#include <bits/stdc++.h>
using namespace std;


//как в квадрат


int main(){
    int n, length{} , zeros{}, local_zeros{}, j{};
    cout << "Enter n: ";
    cin >> n;
    for(int i=1;i<n+1;i++)
        length += i;
    int a[length], vec[n], res[n] /*square_a[length]*/;
    fill(res, res+n, 0);
    cout << "enter matrix: \n";
    for(int i = 0; i < length;i++){
            cin >> a[i];
        }
    cout << "Enter a vector: ";
    for(auto& x : vec) cin >> x;

    //int square_a[] = {1, 2, 3, 4, 2, 3, 4, 3, 4, 4};
    
    
    //a*vector start
    for(int i=0;i<length;i++){
        
        res[zeros] += square_a[i] * vec[j];
        j++;
        
        if(j%n == 0 && j!= 0){
            zeros++;
            j = zeros;
        }
    }
    //a*vector end

    for(auto& x : res) cout << x << " ";
    return 0;
}



/*

1 2 3 4 5 6 7 8 9 10










