#include<stdio.h>
#include<math.h>
// #define MAZ_SIZE 100





//Arrays putting some of memory to many numbers. array Test
int main(){
    int n ;
    scanf("%d" , &n) ;
    int a[n] ;  
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]) ;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d " , a[i]) ;
    }
    return 0 ;
}





// int main(){
//     int a[MAZ_SIZE] ;
//     int n ;
//     scanf("%d" , &n) ;  
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d" , a + i) ; // a + i presents the location of the bits that we have in array , actually a is an address in RAM so a + i means go to a and then +i  
//     }
//     for(int i = 0 ; i < n ; i++){
//         printf("%d " , a[i]) ;
//     }
//     return 0 ;
// }





// Fibonachi serie
// int main(){
//     int Fibonachi[MAZ_SIZE] ;
//     Fibonachi[0] = 1 ; 
//     Fibonachi[1] = 1 ;
//     int n ;
//     scanf("%d" , &n);
//     for(int i = 2 ; i < n ; i++){
//         Fibonachi[i] = Fibonachi[i-1] + Fibonachi[i-2] ;
//     }
//     for(int i = 0 ; i < n ; i++){
//         printf("%d " , Fibonachi[i]) ;
//     }
//     return 0 ;
// }






//2D Array for multitable
// int main(){
//     int a[MAZ_SIZE][MAZ_SIZE] ;
//     int n ;
//     scanf("%d" , &n) ;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= n ; j++){
//             a[i][j] = i * j ;
//         }
//     }
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= n ; j++){
//             printf("%5d" , a[i][j]) ;
//         }
//         printf("\n");
//     }
//     return 0 ;
// }




//Array of characters
// int main(){
//     char c[MAZ_SIZE] ;
//     for(char i = 'A' ; i <= 'Z' ; i++){
//         c[i-'A'] = i ; // or c[i-"A"]
//     }
//     for(int i = 0 ; i <= 25 ; i++){
//         printf("%c", c[i]) ;
//     }
//     return 0 ;
// }



// int main(){
//     char c[MAZ_SIZE] ;
//     for(char i = 'A' ; i <= 'Z' ; i++){
//         c[i-'A'] = i ; // or c[i-"A"]
//     }
//     for(char i = 'a' ; i <= 'z' ; i++){
//         c[i-'a' + 26] = i ; // or c[i-"A"]
//     }
//     for(int i = 0 ; i < 52 ; i++){
//         printf("%c ", c[i]) ;
//     }
//     return 0 ;
// }



// Newton Pascal Khayam


// int main(){
//     int n  ;
//     scanf("%d" , &n) ;
//     int a[MAZ_SIZE][MAZ_SIZE] ;
//     for(int i = 0 ; i <= n ; i++ ){
//         a[i][0] = 1 ;
//         for(int j = 1 ; j <= i - 1  ; j++ ){
//             a[i][j]= a[i-1][j-1] + a[i-1][j] ;
//         }
//         a[i][i] = 1 ;
//     }
//     for(int i = 0 ; i <= n ; i++ ){
//         for(int j = 0 ; j <= (n - i) * 2 ; j ++ )
//             printf(" ");
//         for(int j = 0 ; j <= i ; j++){
//             printf("%6d" , a[i][j]);
//         }
//         printf("\n") ;
//     }
//     return 0 ;
// }