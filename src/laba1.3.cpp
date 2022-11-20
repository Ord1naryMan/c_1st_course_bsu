#include <bits/stdc++.h>
using namespace std;

pair<bool, double> read_cin(const string &invitation)
{
	bool result{};
	double value{};

	cout << invitation << ": ";
	result = (cin >> value).good();
	return {result, value};
}

bool compare_if(double &a, double &b){
    if (a >= b) return {};
    else return {1};
}
bool compare(double &a, double &b){
    return  ((a>=b) ? 0 : 1);
}

template<typename T>
void swap_(T&a, T&b){
    T temp{b};
    b = a;
    a = temp;
}


int main(){
    auto [x_res, x] =  read_cin("x");
    auto [y_res, y] =  read_cin("y");
    auto [z_res, z] =  read_cin("z");
    bool choose;
    cout << "compare with if? [1/0]:";
    cin >> choose;

    if(!x_res || !y_res || !z_res){
        cout << "invalid input";
        return 1;
    }

    
    if(choose){
        if(y< z) swap(y, z);
        if(x< y) swap(x, y);
        if (compare_if(y, z)) swap(y, z);
        cout << x << " " << y << " " << z;
        return 0;
    }
    else{
        if (compare(y, z)) swap(y, z);
        if(compare(x, y)) swap(x, y);
        if (compare(y, z)) swap(y, z);
        cout << x << " " << y << " " << z;
        return 0;
    }
}
