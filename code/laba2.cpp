#include <bits/stdc++.h>
using namespace std;

pair<bool, int> read_cin(const string &invitation)
{
	bool result{};
	int value{};

	cout << invitation << ": ";
	result = (cin >> value).good();
	return {result, value};
}

int main()
{

    //TODO: без строк

	auto [x_result, x] = read_cin("n");
	if (!x_result)
	{
		cerr << "invalid input" << endl;
		return 1;
	}

    bool exist{}, more{};
    int a[10]{0,0,0,0,0,0,0,0,0};
    int number, value;


     while(x > 0){
        a[x%10]++;
        x/=10; 
     }

    int count_2{};
    for(int i=0; i <std::size(a); ++i){
        if(a[i] == 2){
            count_2++;
        }
        else if (a[i] > 2){ 
            more = 1;
            break;
        }
    }

    if(count_2 == 1 && !more) {
        cout << "this number exist, number: " << number;
    }
    else{
        cout << "same numbers do not exist or there are more then two";
    }
    
    return 0;
}