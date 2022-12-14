#include"lab1.3.h"

int main(){
    int n;
    std::cout << "Enter length of array: ";
    std::cin >> n;
    int *array = new int[n];
    point::read(array, n);
    *point::find(array, n) = 0;
    point::print(array, n);

    delete[] array;
    return 0;
}