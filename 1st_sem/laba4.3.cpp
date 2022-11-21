#include<bits/stdc++.h>
using namespace std;


int main(){
    const char* dividers = " .,:;!?-()";

    cout << "Enter length: ";
    int length;
    cin >> length; 
    cin.ignore();
    
    char* input = new char[length+1]{};
    cin.getline(input, length);

    char* word = strtok(input, dividers);
    char* word_first = strdup(word);

    while (word != nullptr){
        word = strtok(nullptr, dividers);
        if(!word) 
            break;
        
        int i = 0;
        bool correct = true;    
        while(word[i] != '\0'){ 
            if(!strchr(word_first, word[i])){
                correct = false;
                break;
            }
            i++;
        }
        
        if (correct)
            cout << word << "\n";
        
    }
    
    delete[] word;
    
    return 0;
}


