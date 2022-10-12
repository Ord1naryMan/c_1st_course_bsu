#include<bits/stdc++.h>

using namespace std;





template <typename T>
void get_up(T* &a, int n){
    for(int i=0;i<n;i++) a[i] = T(i+33);
}

template <typename T>
void get_down(T* &a, int n){
    for(int i=n-1;i>=0;i--) a[i] = T(i+33);
}

template <typename T>
void get_rand(T* &a, int n){
    srand (time(NULL));
    for(int i=0;i<n;i++) a[i] = T((330 + rand()%610)/10.);
}


template <typename T>
void sorting_exchange(T* &a, int n){
    int counter = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
                counter ++;
            } 
        }
        
    }
    cout << "There was " <<  counter << " compairing\n";
}

template<typename T>
void insertion_sorting(T* &a, int n){
    int counter = 0;
    for (int i =0 ; i< n;i++){
        for(int j=i;j>0 && a[j-1] > a[j]; j--) {swap (a[j-1], a[j]); counter++;}
    }
    cout << "There was " <<  counter << " compairing\n";
}
