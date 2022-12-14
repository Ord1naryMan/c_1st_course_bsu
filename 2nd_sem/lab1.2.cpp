#define OUT             //var changes in func
#include "lab1.2.h"

int main(){
    const int N = 100;
    char string[N];
    char *words[N];
    char *result[N];
    std::cin.getline(string, N);

    int word_count = string::get_words(string, OUT words);
    std::cout << std::endl;
    int res_count = string::get_res(OUT words, OUT result, word_count);
    std::cout << "\nResult:\n";
    string::print_words(result, res_count);
    return 0;
}