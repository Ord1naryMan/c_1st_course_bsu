#pragma once
#include<iostream>

namespace matrix{
    inline void read(int **array, int length){
        int **row = array;                          //row of array
        int tmp, op{1}, lim{length}, i{}, j{}, c{length*length};
        while(c){
            while((i != lim && i != -1) && *(*(row + j) + i) == 0){
                std::cin >> tmp;
                *(*(row + j) + i) = tmp;
                c--;
                i += op;
            }
            i -= op;
            j+=op;
            while((j != lim && j != -1) && *(*(row + j) + i) == 0){
                std::cin >> tmp;
                *(*(row + j) + i) = tmp;
                c--;
                j += op;
            }
            j -= op;
            op *= -1;
            i+=op;
        }
    }

    inline void print(int **array, int length){
        int **row = array;
        int *el;
        for(int i = 0; i<length; i++, row++){
            el = *row;
            for(int j = 0; j < length; el++, j++){
                std::cout << *el << " ";
            }
            std::cout << std::endl;
        }
    }

    inline void delete_ar(int **array, int length){
        for(int i = 0; i < length; i++)
            delete[] array[i];
        delete[] array;
    }
}