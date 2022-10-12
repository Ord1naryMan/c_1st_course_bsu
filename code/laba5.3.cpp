#include<bits/stdc++.h>
using namespace std;

bool compare(int* x, int* y) {
    return ( (x[0] < y[0]) || (x[0] == y[0]) );
}


void input_matrix(int n, int m, int **ptr){
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++) 
            cin >> ptr[i][j];
}

void output_matrix(int n, int m, int **ptr){
    cout << "\n\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) 
            cout <<  ptr[i][j] << " ";
        cout << "\n";
    }
}

void sort_matrix(int n, int m,int **ptr){
    sort(ptr, ptr+n, &compare);
}


int main(){
    int n, m;
    cout << "Enter matrix size (X x Y): ";
    cin >> m >> n;
    int *matrix[n];
    for(int i = 0; i < n; i++)
        matrix[i] = new int[m];
    input_matrix(n, m, matrix);
    sort_matrix(n, m, matrix);
    output_matrix(n, m, matrix);
    return 0;
}
