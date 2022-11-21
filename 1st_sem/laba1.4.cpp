#include <bits/stdc++.h>
using namespace std;

// TODO: k,l,m,n --> значимые имена[+]
// TODO: почему double?[+]

std::pair<bool, int> read_cin(const std::string &invitation)
{
    bool result{};
    int value{};

    cout << invitation << ": ";
    result = (cin >> value).good();
    return {result, value};
}

int main()
{

    auto [x_result, x] = read_cin("k");
    auto [y_result, y] = read_cin("l");
    auto [x_destination_result, x_destination] = read_cin("m");
    auto [y_destination_result, y_destination] = read_cin("n");

    if (!x_result || !y_result || !x_destination_result || !y_destination_result)
    {
        std::cerr << "invalid input" << std::endl;
        return 1;
    }

    if ((x + y) % 2 != (x_destination + y_destination) % 2)
    {
        cout << "defferent colors";
        return 0;
    }

    if (abs(x - x_destination) == abs(y - y_destination))
    {
        cout << "it is on the same diagonal";
        return 0;
    }

    int a = x - x_destination;
    int b = y - y_destination;
    int step1 = abs((a + b) / 2);
    int step2 = abs((a - b) / 2);

    bool right_up_st1 = abs(x_destination - (x + step1)) == abs(y_destination - (y + step1));
    bool right_down_st1 = abs(x_destination - (x + step1)) == abs(y_destination - (y - step1));
    bool right_up_st2 = abs(x_destination - (x + step2)) == abs(y_destination - (y + step2));
    bool right_down_st2 = abs(x_destination - (x + step2)) == abs(y_destination - (y - step2));
    bool left_up_st2 = abs(x_destination - (x - step2)) == abs(y_destination - (y + step2));
    bool left_down_st1 = abs(x_destination - (x - step1)) == abs(y_destination - (y - step1));
    bool left_up_st1 = abs(x_destination - (x - step1)) == abs(y_destination - (y + step1));
    bool left_down_st2 = abs(x_destination - (x - step2)) == abs(y_destination - (y - step2));

    if ((left_down_st1) && abs((y - step1)) > 0 && abs((y - step1)) < 9 && abs((x - step1)) > 0 && abs((x - step1)) < 9)
    {
        cout << x - step1 << " " << y - step1;
        return 0;
    }
    if (right_down_st1 && abs((x + step1)) > 0 && abs((x + step1)) < 9 && abs((y - step1)) > 0 && abs((y - step1)) < 9)
    {
        cout << x + step1 << " " << y - step1;
        return 0;
    }
    if (left_up_st1 && abs((x - step1)) > 0 && abs((x - step1)) < 9 && abs((y + step1)) > 0 && abs((y + step1)) < 9)
    {
        cout << x - step1 << " " << y + step1;
        return 0;
    }
    if (right_up_st1 && abs((x + step1)) > 0 && abs((x + step1)) < 9 && abs((y + step1)) > 0 && abs((y + step1)) < 9)
    {
        cout << x + step1 << " " << y + step1;
        return 0;
    }
    if (left_down_st2 && abs((x - step2)) > 0 && abs((x - step2)) < 9 && abs((y - step2)) > 0 && abs((y - step2)) < 9)
    {
        cout << x - step2 << " " << y - step2;
        return 0;
    }
    if (right_down_st2 && abs((x + step2)) > 0 && abs((x + step2)) < 9 && abs((y - step2)) > 0 && abs((y - step2)) < 9)
    {
        cout << x + step2 << " " << y - step2;
        return 0;
    }
    if (left_up_st2 && abs((x - step2)) > 0 && abs((x - step2)) < 9 && abs((y + step2)) > 0 && abs((y + step2)) < 9)
    {
        cout << x - step2 << " " << y + step2;
        return 0;
    }
    if (right_up_st2 && abs((x + step2)) > 0 && abs((x + step2)) < 9 && abs((y + step2)) > 0 && abs((y + step2)) < 9)
    {
        cout << x + step2 << " " << y + step2;
        return 0;
    }

    return 0;
}