 #include <bits/stdc++.h>
using namespace std;


//TODO не высчитывать маску сторонними средствами, а посчитать её внутри программы (хинт: нужны << и | )

int main()
{
	
    char n;
    cout << "Enter char: ";
    cin >> n;
    
    //1111 1111
    //        11xxxxxxxx
    cout <<"0 bit: " <<  (n&1) << "\n6 bit: " << ((n>>6)&1) << " ";
 
    cout << "reversed:" << (n ^ ((1<<1) | (1<<3)));
    
    return 0;
}
