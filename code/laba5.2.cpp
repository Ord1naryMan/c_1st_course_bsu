#include<bits/stdc++.h>
#include "funcs_for_laba6.cpp"

using namespace std;


enum choices{
    INT = 'i',
    FLOAT = 'f',
    DOUBLE = 'd',
    CHAR = 'c',

    RANDOM = 'r',
    UP = 'u',
    DOWN = 'd',

    INSERTION = 'i',
    EXCEPTION = 'e'
};

template<typename T>
void process(int n){
    T* arr = new T[n];
    char answer;
    cout << "How do you want to initialaise array(random, up, down)?[r/u/d] ";
    cin >> answer;
    switch(answer){
        case choices::RANDOM: get_rand(arr, n); break;
        case choices::UP: get_up(arr, n); break;
        case choices::DOWN: get_down(arr, n); break;
        default: {cout << "Pls enter your choose as i ask you to do!"; return ;}
    }
    cout << "Choose what type of sorting do you want(insertion, exchange)? [i/e]";
    cin >> answer;
    switch(answer){
        case choices::INSERTION: insertion_sorting(arr, n); break;
        case choices::EXCEPTION: sorting_exchange(arr, n); break;
        default: {cout << "Pls enter your choose as i ask you to do!"; return ;}
    }
    
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    return;
}

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    char choice;
    cout << "What datatype should i use?(int, float, double, char)[i/f/d/c]";
    cin >> choice;
    switch(choice){
        case choices::INT: process<int>(n); break;
        case choices::FLOAT: process<float>(n); break;
        case choices::DOUBLE: process<double>(n); break;
        case choices::CHAR: process<char>(n); break;
        default: cout<< "you entered wrong num"; return 0;
    }

    return 0;
}

