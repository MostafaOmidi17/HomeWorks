//403110393 mostafa omidi
#include <stdio.h>
int main(){
    int a ;
    int b ;
    scanf("%d" , &a ) ;
    scanf("%d" , &b ) ;
    int a_7 = (a >> 7) & 1 , a_6 = (a >> 6) & 1 , a_5 = (a >> 5) & 1 , a_4 = (a >> 4) & 1 , a_3 = (a >> 3) & 1 , a_2 = ( a >> 2 ) & 1 , a_1 = (a >> 1) & 1 , a_0 = a & 1 ;
    int b_7 = (b >> 7) & 1 , b_6 = (b >> 6) & 1 , b_5 = (b >> 5) & 1 , b_4 = (b >> 4) & 1 , b_3 = (b >> 3) & 1 , b_2 = ( b >> 2 ) & 1 , b_1 = (b >> 1) & 1 , b_0 = b & 1 ;
    int numbers_of_ones = a_0 + a_1 + a_2 + a_3 + a_4 + a_5 + a_6 + a_7 + b_0 + b_1 + b_2 + b_3 + b_4 + b_5 + b_6 + b_7 ;
    int S = ( numbers_of_ones%2 == 0 ) ;
    printf("%d" , a + S * b + (S - 1) * b) ;
    return 0 ;
}