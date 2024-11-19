#include<stdio.h>


// int main(){
//     int n ;
//     scanf("%d" , &n) ;
//     if(n == 1 || n == 2){
//         printf("%d" , 1) ;
//         return 0 ;
//     }
//     int fn = 1 ;
//     int fnminus1 = 1 ;
//     for(int i = 3 ; i <= n ; i++){
//         int temp = fnminus1 ;
//         fnminus1 = fn ;
//         fn = temp + fn ;
//     }
//     printf("%d" , fn) ;
//     return 0;
// }



// int main(){
//     int n ;
//     scanf("%d" , &n) ;
//     int fn = 1 ;
//     int fnminus1 = 1 ;
//     if(n == 1 || n == 2){
//         printf("%d" , 1) ;
//         return 0 ;
//     }else{
//         for(int i = 3 ; i <= n ; i++){
//             int temp = fnminus1 ;
//             fnminus1 = fn ;
//             fn = temp + fn ;
//         }
//     }
//     printf("%d" , fn) ;
//     return 0;
// }



// changing the values of a and b
// int main(){
//     int a , b ;
//     a = a + b ;
//     b = a - b ;
//     a = a - b ;
// }

// plotting product table
// int main(){
//     int n ;
//     scanf("%d" , &n) ;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= n ; j++){
//             printf("%d\t" , i*j) ;
//         }
//         printf("\n") ;
//     }
//     return 0 ;
// }



// int main(){
//     int n ;
//     scanf("%d" , &n) ;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= n ; j++){
//             printf("%3d" , i*j) ;
//         }
//         printf("\n") ;
//     }
//     return 0 ;
// }




// mosalas khayam pascal newton
// int main(){
//     int n  ;
//     scanf("%d" , &n) ;
//     for(int i = 1 ; i <= n ; i++ ){
//         for(int j = 1 ; j <= (n - i) * 2 ; j ++ )
//             printf(" ");
//         for(int j = 1 ; j <= i ; j++){
//             printf("%4d" , 100);
//         }
//         printf("\n") ;
//     }
//     return 0 ;
// }



//do while loop
// int main(){
//     int a = 10 ,  b = 9 ;
//     do {
//         printf("%d\n" , a) ;
//         a++ ;
//     }
//     while( a < b ) ;
//     return 0;
// }