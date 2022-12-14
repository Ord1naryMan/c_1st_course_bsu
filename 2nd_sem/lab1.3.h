#include<iostream>

namespace point{
    inline void read(int *arr, int n){
        for(int i=0;i<n;i++)
            std::cin >> arr[i];
    }

    inline int* find(int *arr, int length){
        int *oneTime = arr;
        int *min = arr;
        int *save = nullptr;
        for(int i = 0;i < length; i++){
            if(*min > *(arr+i)){
                min = arr+i;
            }
            if(!oneTime)
                oneTime = arr+i;
            else if(*oneTime > *(arr+i)){
                save = oneTime;
                oneTime = arr+i;
            }
            for(int j = i+1; j < length && oneTime; j++){
                if(*oneTime == *(arr+j)){
                    oneTime = nullptr;
                }
            }
            if(!oneTime && save){
                oneTime = save;
                save = nullptr;
            }
        }
        return (oneTime)? oneTime : min;
    }

    inline void print(int *arr, int length){
        for(int i = 0; i< length; i++)
            std::cout << arr[i] << " ";
    }
}