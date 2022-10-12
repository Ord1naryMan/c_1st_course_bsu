#include <bits/stdc++.h>
using namespace std;

std::pair<bool, double> read_cin(const std::string &invitation)
{
	bool result{};
	double value{};

	cout << invitation << ": ";
	result = (cin >> value).good();
	return {result, value};
}

int main()
{
	auto [x_result, x] = read_cin("x");
	auto [y_result, y] = read_cin("y");
	auto [r_result, r] = read_cin("r");

	if (!x_result || !y_result || !r_result)
	{
		std::cerr << "invalid input" << std::endl;
		return 1;
	}

	bool in_circle = sqrt(pow(x, 2) + pow(y, 2)) <= r;
	bool q_1 = x > 0 && y > 0;
	bool q_3 = x < 0 && y < 0;
	bool in_triangle = ((-r - x) * (-r - y) - x * x) / 2. >= 0;

	std::cout << (((in_circle && q_1) || (in_triangle && q_3)) ? "true" : "false") << endl;
	return 0;
}