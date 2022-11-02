#include<bits/stdc++.h>


using namespace std;


enum class parts {
    MANT = 'm',
    EXP = 'e',
    SIGN = 's',
}

enum class choices{

    MAN = 'm',
    RAN = 'r'
};

union value{
    float f;
    struct{
        unsigned mant : 23;
        unsigned exp : 8;
        unsigned sign : 1;
    } bits;
};

void to_bin(unsigned n, char operation){
    int lim;
    switch (operation){
        case parts::MANT: lim = 23; break;
        case parts::EXP: lim = 8; break;
        case parts::SIGN: lim = 1; break;
    }
    for(int i=0;i<lim;i++){
        cout << (int)((n>>(lim-i-1))&1);
    }
}


void show_answer(vector<value> ans){
    if(ans.size() == 0){
        cout << "No matches!!";
        return;
    }
    cout << "\nHere is your table: \n";
    cout << "+";
    for(int i=0;i<59;i++) cout << "-";
    cout << "+";
    cout << "\n";
    cout << "|   Value   |sign:|  exp:  |              mant:             |\n";
    cout << "+";
    for(int i=0;i<59;i++) cout << "-";
    cout << "+";
    cout << "\n";
    for (auto& x : ans){
        cout << "|";
        cout << setw(11) << x.f << "|";
        to_bin(x.bits.sign, 's');
        cout << "    |";
        to_bin(x.bits.exp, 'e');
        cout << "|";
        to_bin(x.bits.mant, 'm');
        cout << "|\n";
        cout << "+";
        for(int i=0;i<59;i++) cout << "-";
        cout << "+";
        cout << "\n";
    }
    

}


int main(){
    int n;
    char choice;
    vector<value> result;
    cout << "enter size: ";
    cin >> n;
    cout << "do you want to initialise manualy or randomly?[m/r]:";
    cin >> choice;
    value *ar = new value[n];
    if(choice == choices::MAN){
        for(int i=0;i<n;i++){
        	cout << "enter number: )\n:";
        	cin >> ar[i].f;
        }
    }
    else if(choice == choices::RAN){
        srand (time(NULL));
        for(int i=0;i<n;i++)
            ar[i].f = (float)((rand()%100)/10.);
    
    }
    sort(ar, ar + n, [](const value& lhs, const value& rhs){
     if(lhs.bits.sign == rhs.bits.sign)
         if(lhs.bits.exp == rhs.bits.exp)
            return lhs.bits.mant < rhs.bits.mant;
         else
            return lhs.bits.exp < rhs.bits.exp;
     else
        return lhs.bits.sign < rhs.bits.sign;
     });
    bool was{};
    for(int i=0;i<n-1;i++){
        if(ar[i].f == ar[i+1].f && !was){
            was = 1;
            result.push_back(ar[i]);
        }
        else
            was = 0;
    }
    show_answer(result);
    return 0;
}
