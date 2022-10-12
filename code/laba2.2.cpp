#include<iostream>
#include<cmath>
using namespace std;


//TODO: итерируем пока слогаемое не станет меньше чем точность (по дефолту 1e-6 но настраивается)[+]
//TODO: выполнить без pow[+]

std::pair<double,int> taylor(double x){
    double out{}, prev;
    int sign{-1};
    int i=1;
    double x_value = x;
    const double epsilon = 1e-8;

    do{   
        prev = out;
        out += ((-1)*sign)*(double(x_value)/i);
        x_value *= x;
        i++;
        sign = -sign;
    }while(abs(out-prev)>epsilon);

    return {out-x,i};
}

int main(){
    
    float x0{-0.8}, dx{0.1}, x=x0;
    int xn{1}, i{1};
    
    while(x < xn){
            auto [y, n] = taylor(x);
            cout <<"my func: " <<  y << "(" << n << ")" << "\n";
            cout <<"cpp func: " << log(x+1)-x << "\n";
            x += dx*i++;
    }


    return 0;
}