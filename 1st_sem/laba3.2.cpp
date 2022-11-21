#include <bits/stdc++.h>
using namespace std;

const int MIN_VALUE = -32727;

int find_max(int** arr, int limit_x, int limit_y, int n, int m){
    int max_value = MIN_VALUE;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(i!=limit_x && j != limit_y) 
                max_value = max(max_value, arr[i][j]);
    return max_value;
}


int main(){
    srand(time(NULL));
    
    int n, m;
    cout << "enter size of a matrix(x, y): ";
    cin >> n >> m;
    
    
    
    int** matrix = new int*[ n ];
    for( int i = 0; i < n; ++i )
    {
        matrix[ i ]  = new int[ m ]{};
    }
    
    int** answer = new int*[ n ];
    for( int i = 0; i < n; ++i )
    {
        answer[ i ]  = new int[ m ]{};
    }
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            matrix[i][j] = rand()%20;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            answer[i][j] = find_max(matrix, i, j, n, m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout << answer[i][j] << " ";
        cout << "\n";
    }
    cout << "\n\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    return 0;
}





// return new matrix
