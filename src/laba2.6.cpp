#include <bits/stdc++.h>

using namespace std;

int main(){
    double x0{1}, xm{2}, dx{0.25}, n=(xm-x0)/dx;
    double res_by_sum{}, res_by_mult{};
    int counter{}, mult{0};
    for (int i=0;i<n;i++){
        res_by_sum += (n-i)*10+pow((x0+i*dx), 2*(n-i));
        counter++;
        cout << res_by_sum << " with " << counter << " summs\n";
    }
    for (int i=0;i<n;i++){
            res_by_mult += pow((x0+i*dx), i+1);
            mult++;
            cout << res_by_mult << " with " << mult << " multyplies\n";
    }
    return 0;
}
