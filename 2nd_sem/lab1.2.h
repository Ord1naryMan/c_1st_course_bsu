#pragma once

#include<iostream>
#include<cstring>
#include<algorithm>

namespace string{
    inline int get_words(char string[], char *words[]){
        char *word = strtok(string, " ,.;:!?()");
        int i{0};
        words[i++] = word;
        while(word){
            word = strtok(nullptr, " ,.;:!?()");
            words[i] = word;
            i++;
        }
        return i-1;
    }

    inline int get_res(char *words[], char *res[], int length){
        int k = 0;
        for(int i = 0; i < length; i++)
            for(int j = 0; j < length; j++){
                char *word_c = strdup(words[j]);
                std::reverse(word_c, word_c+strlen(word_c));
                if(!strcmp(words[i], word_c) && strcmp(words[i], "")){
                    res[k] = strdup(words[i]);
                    words[i][0] = '\0';
                    words[j][0] = '\0';
                    k++;
                }
                free(word_c);
            }
        return k;
    }

    inline void print_words(char *words[], int length){
        for(int i = 0; i < length; i++)
            std::cout << words[i] << " ";
    }
}