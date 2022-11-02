+-----+----------------------+--------------------+-------------------------+-----------------------+
|Num  |insertion if comparing|insertion swap compairing|excange if comparing|excange swap compairing|
+-----+----------------------+--------------------+-------------------------+-----------------------+
|10   |          22          +              25    +                 20      +               23      +
+-----+
|100  |
+-----+
|1000 |
+-----+
|10000|
+-----+----------------------+---------------------+------------------------+------------------------+




#include<bits/stdc++.h>
#include "funcs_for_laba6.h"

using namespace std;

template<typename T>
void process(){
    int len = 10;
    char answer;
    cout << "How do you want to initialaise array(random, up, down)?[r/u/d]: ";
    cin >> answer;
    cout << "+-----+----------------------+--------------------+-------------------------+-----------------------+\n"
             << "|Num  |insertion if comparing|insertion swap compairing|excange if comparing|excange swap compairing|\n"
                <<"+-----+----------------------+--------------------+-------------------------+-----------------------+\n";
    /*
    switch(answer){
        case choices::RANDOM: get_rand(arr, n); break;
        case choices::UP: get_up(arr, n); break;
        case choices::DOWN: get_down(arr, n); break;
        default: {
            cout << "Pls enter your choose as i ask you to do!"; 
            return;
        }
    }
    */
    /*
    cout << "Your array: \n";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Choose what type of sorting do you want(insertion, exchange)? [i/e]: ";
    cin >> answer;
    switch(answer){
        case choices::INSERTION: insertion_sorting(arr, n); break;
        case choices::EXCEPTION: sorting_exchange(arr, n); break;
        default: {
            cout << "Pls enter your choose as i ask you to do!"; 
            return;
        }
        
    }*/
    for(int i=0;i<4;i++, len*=10){
        T* arr = new T[len];
        switch(answer){
            case init_mode::RANDOM: get_rand(arr, len); break;
            case init_mode::UP: get_up(arr, len); break;
            case init_mode::DOWN: get_down(arr, len); break;
            default: {
                cout << "Pls enter your choose as i ask you to do!"; 
                return;
            }
        }
        insertion_sorting(arr, len);
        sorting_exchange(arr, len);
        cout << "+-----+----------------------+---------------------+------------------------+------------------------+";
        
    
    
    
    }
    //cout << "Your sorted array:\n";
    //for(int i=0;i<n;i++) cout << arr[i] << " ";
    return;
}

int main(){
/*
    int n;
    cout << "enter size of array: ";
    cin >> n;
    */
    char choice;
    cout << "What datatype should i use?(int, float, double, char)[i/f/d/c]";
    cin >> choice;
    switch(choice){
        case data_type::INT: process<int>(); break;
        case data_type::FLOAT: process<float>(); break;
        case data_type::DOUBLE: process<double>(); break;
        case data_type::CHAR: process<char>(); break;
        default: cout<< "you entered wrong num"; return 0;
    }

    return 0;
}






#include<bits/stdc++.h>

using namespace std;


enum class data_type : char {
    INT = 'i',
    FLOAT = 'f',
    DOUBLE = 'd',
    CHAR = 'c',
};

enum class init_mode : char {
    UP = 'u',
    DOWN = 'd',
    RANDOM = 'r',
    MANUAL = 'm',
};

enum class sort_mode : char {
    INSERTION = 'i',
    EXCEPTION = 'e'

};

template <typename T>
void get_up(T* &a, int n){
    srand(time(0));
    T num = T(rand()%100);
    if(sizeof(T) == sizeof(char)){
        char ch;
        cout << 
    "Do you want to choose first letter manualy or randomly?[m/r]: ";
    
        cin >> ch;
        switch(ch){
            case init_mode::MANUAL:{
                cout << "Enter first symb: ";
                cin >> num;
                break;
            }
            case init_mode::RANDOM:{
                srand(time(0));
                num = 'A'+rand()%('Z'-'A');
                break;
            }
        }
    }
    T in;
    for(int i=0;i<n;i++){
        in = T((i)+num);
        if(sizeof(T) == sizeof(float) || sizeof(T) == sizeof(double))
            a[i] = in/10;
        else
            a[i] = in;
    }
}

template <typename T>
void get_down(T* &a, int n){
    srand(time(0));
    T num = T(rand()%100);
    if(sizeof(T) == sizeof(char)){
        char ch;
        cout << 
    "Do you want to choose first letter manualy or randomly?[m/r]: ";
    
        cin >> ch;
        switch(ch){
            case init_mode::MANUAL:{
                cout << "Enter first symb: ";
                cin >> num;
                break;
            }
            case init_mode::RANDOM:{
                srand(time(0));
                num = 'A'+rand()%22;
                break;
            }
        }
    }
    T in;
    int counter = 0;
    for(int i=n-1;i>=0;i--, counter++){ 
        in = T(counter)+num;
        if(sizeof(T) == sizeof(float) || sizeof(T) == sizeof(double))
            a[i] = in/10;
        else
            a[i] = in;
    }

}

void get_rand(char* &a, int n){
    srand (time(NULL));
    for(int i=0;i<n;i++) 
        a[i] = (rand() % ('Z'-' '))+' ';
}

void get_rand(float* &a, int n){
    srand (time(NULL));
    for(int i=0;i<n;i++) 
        a[i] = (rand() % 1000) / 10.;
}


template <typename T>
void get_rand(T* &a, int n){
    srand (time(NULL));
    for(int i=0;i<n;i++) 
        a[i] = rand() % 100;
}


template <typename T>
void sorting_exchange(T* &a, int n){
    int counter_if = 0;
    int counter_swap = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
                counter_swap ++;
            } 
            counter_if++;
        }
        
    }
    cout << setw(22) << counter_if << "+" << setw(25) << counter_swap << "+\n"; 
}

template<typename T>
void insertion_sorting(T* &a, int n){
    int counter_if = 0;
    int counter_swap = 0;
    for (int i =0 ; i< n;i++){
        for(int j=i;j>0 && a[j-1] > a[j]; j--) {
            swap (a[j-1], a[j]); 
            counter_swap++;
        }
        counter_if++;
    }
    cout << "|" << setw(5) << n << "|" << setw(22) << counter_if << "+" << setw(25) << counter_swap << "+"; 
}



