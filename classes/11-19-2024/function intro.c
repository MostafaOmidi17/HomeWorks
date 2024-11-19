#include<stdio.h>



int add_or_minus(int a , int b , int a_or_m){
    if(a_or_m > 0){
        return a + b ;
    }
    if(a_or_m < 0){
        return a - b;
    }
    return 0;
}


int main(){

    // printf("%d" , add_or_minus(5,6,1));
    int a[10][10];
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10; j++){
            a[i][j] = add_or_minus(i , j , 1);
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10; j++){
            printf("%2d " , a[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}