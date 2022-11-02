#include<bits/stdc++.h>
#include "funcs_for_laba6.h"

using namespace std;

template<typename T>
void process(){
    int len = 10;
    char answer;
    int it;
    cout << "How many iterations?[MAX=4] ";
    cin >> it;
    cout << "How do you want to initialaise array(random, up, down)?[r/u/d]: ";
    cin >> answer;
    cout << "+-----+----------------------+-------------------------+--------------------+------------------------+\n"
             << "|Num  | insertion if counter | insertion swap counter  | exchange if counter|  exchange swap counter |\n"
                <<"+-----+----------------------+-------------------------+--------------------+------------------------+\n";
    
    for(int i=0;i<it;i++, len*=10){
        T* arr1 = new T[len];
        T* arr2 = new T[len];
        switch((init_mode)answer){
            case init_mode::RANDOM: get_rand(arr1, arr2,  len); break;
            case init_mode::UP: get_up(arr1,arr2, len); break;
            case init_mode::DOWN: get_down(arr1, arr2, len); break;
            default: {
                cout << "Pls enter your choose as i ask you to do!"; 
                return;
            }
        }
        insertion_sorting(arr1, len);
        sorting_exchange(arr2, len);
        cout << "+-----+----------------------+-------------------------+--------------------+------------------------+\n";
        
    
    
    
    }


}

int main(){

    char choice;
    cout << "What datatype should i use?(int, float, double, char)[i/f/d/c]";
    cin >> choice;
    switch((data_type)choice){
        case data_type::INT: process<int>(); break;
        case data_type::FLOAT: process<float>(); break;
        case data_type::DOUBLE: process<double>(); break;
        case data_type::CHAR: process<char>(); break;
        default: cout<< "you entered wrong num"; return 0;
    }

    return 0;
}

