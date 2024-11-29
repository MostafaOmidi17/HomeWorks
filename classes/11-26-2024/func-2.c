#include <stdio.h>


//we should always fill the second parameter. we can write it like a[][100]
void print_matrix(int m , int n , int a[100][100]){
    for(int i = 1 ; i < m ; i++){
        for(int j = 1 ; j < n ; j++){
            printf("%3d " , a[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int ss[20][100]; // we can not give it like ss[20][20] or ss[100][20]
    for(int i = 0; i < 11 ; i++){
        for(int j = 0 ; j < 11; j++){
            ss[i][j] = i * j;
        }
    }
    print_matrix(11 , 11 ,ss);
    return 0;
}