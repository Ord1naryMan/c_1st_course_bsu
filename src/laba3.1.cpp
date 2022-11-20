#include<bits/stdc++.h>

using namespace std;

const int MAXIM_INPUT = 32727;


enum choices{
     MANUAL = 'm',
     RANDOM = 'r'
};

int main(){
    srand(time(NULL));  //set random seed    

    int n;
    cout << "enter size of array: ";
    cin >> n;
    int numbers[n];
    int was[MAXIM_INPUT]{};
    
    cout << "How do you want to initialise an array random or manual?[r/m]";
    char answer;
    cin >> answer;
    switch(answer){
        case choices::MANUAL : for(int i=0;i<n;i++) cin >> numbers[i]; break;
        case choices::RANDOM : for (int i=0;i<n;i++) numbers[i] = rand()%10; break;
        default: cout << "incorrect input, quiting"; return 1;
    }
    for(int i=0;i<n;i++){
        was[numbers[i]]++;
    }
    
    for(int i=0;i<MAXIM_INPUT;i++) 
        if(was[i] > 1) cout <<"element " <<  i << " meet  " << was[i] << "times\n";
    return 0;
}

