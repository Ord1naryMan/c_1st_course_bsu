#include<bits/stdc++.h>
using namespace std;
const int NOS = 10;  //number_os_separators
int main(){
    char separators[] = {' ' ,  '.' ,  ',' ,  ':' ,  ';' , '!' ,   '?' ,  '-' ,  '(' ,  ')'};
    cout << "Enter length: ";
    int length;
    cin >> length;    
    char word[length];
    fill(word, word+length, 0);
    cin.ignore();
    cin.getline(word, length);
    int end = length;
    bool separate{};
    for(int i=0;i<length;i++){
        separate = (find(separators, separators+NOS, word[i]) != separators+NOS);
         if(separate){
            end = i;
            break;
         }
    }
    srand (time(NULL));
    int range = rand()%7;
    char new_word[range];
    for(int i=0;i<range;i++)
        new_word[i] = word[rand()%end];
    cout << new_word << "\n";
    return 0;
}

//how to read char with spaces
