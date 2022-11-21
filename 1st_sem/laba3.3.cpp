#include <bits/stdc++.h>
using namespace std;


//придумать как найти макс возможно число для компьютера на котором запускается программа
// ОС любая на выбор (выбор из Windows 11 и Linux 5.19.2)

void SieveOfEratosthenes(size_t n)
{
    bool prime[n];
    fill(prime, prime+n, true);
 
    for (size_t p = 2; p * p < n; p++) {
        if (prime[p] == true) {
            for (size_t i = p * p; i < n; i += p)
                prime[i] = false;
        }
    }
    for (size_t p = n-1; p >= 2; p--)
        if (prime[p]){
            cout << p;
            return;
        }
}





int main(){
    size_t size = 0;
    SieveOfEratosthenes(size-1);
    return 0;
    
}
