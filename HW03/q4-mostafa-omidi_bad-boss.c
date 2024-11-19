//403110393 mostafa omidi

#include<stdio.h>
#include<math.h>

int main(){
    int n  ;
    scanf("%d" , &n) ;
    n = n - 1 ;
    int a[n + 1][n + 1] ;
    for(int i = 0 ; i <= n ; i++ ){
        a[i][0] = 1 ;
        for(int j = 1 ; j <= i - 1  ; j++ ){
            a[i][j]= j + 1 ;
        }
        a[i][i] = i + 1 ;
    }
    for(int i = 0 ; i <= n ; i++ ){
        for(int j = 1 ; j <= (n - i) ; j ++ )
            printf(" ");
        for(int j = 0 ; j <= i ; j++){
            printf("%d " , a[i][j]);
        }
        printf("\n") ;
    }
    for(int i = n - 1 ; i >= 0 ; i-- ){
        for(int j = 1 ; j <= (n - i) ; j ++ )
            printf(" ");
        for(int j = 0 ; j <= i ; j++){
            printf("%d " , a[i][j]);
        }
        printf("\n") ;
    }
    return 0 ;
}