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

enum class init_mode_c : char {
    RANDOM = 'r',
    MANUAL = 'm',
};

enum class sort_mode : char {
    INSERTION = 'i',
    EXCEPTION = 'e'

};

template <typename T>
void get_up(T* &a1, T* &a2, int n){
    srand(time(0));
    T num = T(rand()%100);
    if(sizeof(T) == sizeof(char)){
        char ch;
        cout << 
    "Do you want to choose first letter manualy or randomly?[m/r]: ";
    
        cin >> ch;
        switch((init_mode_c)ch){
            case init_mode_c::MANUAL:{
                cout << "Enter first symb: ";
                cin >> num;
                break;
            }
            case init_mode_c::RANDOM:{
                srand(time(0));
                num = 'A'+rand()%('Z'-'A');
                break;
            }
        }
    }
    T in;
    for(int i=0;i<n;i++){
        in = T((i)+num);
        if(sizeof(T) == sizeof(float) || sizeof(T) == sizeof(double)){
            a2[i] = in/10;
            a1[i] = in/10;
        }
        else{
            a1[i] = in;
            a2[i] = in;
        }
    }
}

template <typename T>
void get_down(T* &a1, T* &a2, int n){
    srand(time(0));
    T num = T(rand()%100);
    if(sizeof(T) == sizeof(char)){
        char ch;
        cout << 
    "Do you want to choose first letter manualy or randomly?[m/r]: ";
    
        cin >> ch;
        switch((init_mode_c)ch){
            case init_mode_c::MANUAL:{
                cout << "Enter first symb: ";
                cin >> num;
                break;
            }
            case init_mode_c::RANDOM:{
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
        if(sizeof(T) == sizeof(float) || sizeof(T) == sizeof(double)){
            a2[i] = in/10;
            a1[i] = in/10;
        }
        else{
            a1[i] = in;
            a2[i] = in;
        }
    }
}

void get_rand(char* &a1, char* &a2, int n){
    srand (time(NULL));
    char num;
    for(int i=0;i<n;i++){ 
        num = (rand() % ('Z'-' '))+' ';
        a1[i] = num;
        a2[i] = num;
        
    }
}

void get_rand(float* &a1, float* &a2, int n){
    srand (time(NULL));
    float num;
    for(int i=0;i<n;i++){ 
        
        num = (rand() % 1000) / 10.;
        a1[i] = num;
        a2[i] = num;
    }
}


template <typename T>
void get_rand(T* &a1, T* &a2, int n){
    srand (time(NULL));
    T num;
    for(int i=0;i<n;i++){
        num = rand() % 100;
        a1[i] = num;
        a2[i] = num;
    }
}


template <typename T>
void sorting_exchange(T* &a, int n){
    int counter_if = 0;
    int counter_swap = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
                counter_swap++;
            } 
            counter_if++;
        }
        
    }
    cout << setw(20) << counter_if << "|" << setw(24) << counter_swap << "|\n"; 
}

template<typename T>
void insertion_sorting(T* &a, int n){
    int counter_if = 0;
    int counter_swap = 0;
    for (int i =0 ; i< n;i++){
        for(int j=i;j>0 && a[j-1] > a[j]; j--) {
            swap (a[j-1], a[j]); 
            counter_swap++;
            counter_if++;
        }
         counter_if++;
        
    }
    cout << "|" << setw(5) << left << n << "|"  << setw(22) << counter_if << "|" << setw(25) << counter_swap << "|"; 
}
