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
//a1, b1, c1, a2, b2, c2
int main()
{
	auto [a1_result, a1] = read_cin("a1");
	auto [b1_result, b1] = read_cin("b1");
	auto [c1_result, c1] = read_cin("c1");
    auto [a2_result, a2] = read_cin("a2");
	auto [b2_result, b2] = read_cin("b2");
	auto [c2_result, c2] = read_cin("c2");

	if (!a1_result || !b1_result || !c1_result || !a2_result || !b2_result || !c2_result)
	{
		std::cerr << "invalid input" << std::endl;
		return 1;
	}
    

    double x, y;

    //x = (-b1*y- c1)/a1;
    //y = (-a2(-b1*y - c1) - c2)/b2;  b2*y = (a2*b1*y +a2*c1 -c2)   y = (a2*c1 -c2)/(b2-b1*a2)
    
    if (b2*a1-b1*a2 == 0 || a1 == 0){
        cerr << "division by zero";
        return 1;
    }
    y = (c2*a1-a2*c1)/(double)(b1*a2 -b2*a1);
    x = (-b1*y- c1)/(double)a1;
    cout << "x= " << x << ", y= " << y;
    return 0;

}