//403110393 mostafa omidi
#include<stdio.h>
#include<math.h>

int main(){
    int num ;
    scanf("%d" , &num) ;
    if( (num / 100000) + (num % 100000) / 10 == num % 10 ){
        printf("%d+%d=%d" , (num / 100000) , ( (num % 100000) / 10 ) , (num % 10) ) ; 
    }else if( (num / 100000) + (num % 100000) / 100 == num % 100 ){
        printf("%d+%d=%d" , (num / 100000) , ( (num % 100000) / 100 ) , ( num % 100 ) ) ;
    }else if( (num / 100000) + (num % 100000) / 1000 == num % 1000 ){
        printf("%d+%d=%d" , (num / 100000) , ((num % 100000) / 1000) , num % 1000 ) ;
    }else if( (num / 100000) + (num % 100000) / 10000 == num % 10000 ){
        printf("%d+%d=%d" , (num / 100000) , ((num % 100000) / 10000) , (num % 10000)) ;
    }else if( (num / 10000) + (num % 10000) / 10 == num % 10 ){
        printf("%d+%d=%d" , (num / 10000) , ((num % 10000) / 10) , (num % 10) ) ;
    }else if( (num / 10000) + (num % 10000) / 100 == num % 100){
        printf("%d+%d=%d" , (num / 10000) , ((num % 10000) / 100) , (num % 100)) ;
    }else if( (num / 10000) + (num % 10000) / 1000 == num % 1000 ){
        printf("%d+%d=%d" , (num / 10000) , ((num % 10000) / 1000) , (num % 1000) ) ;
    }else if( (num / 1000) + (num % 1000) / 10 == num % 10 ){
        printf("%d+%d=%d" , (num / 1000) , ((num % 1000) / 10) , (num % 10)) ;
    }else if( (num / 1000) + (num % 1000) / 100 == num % 100 ){
        printf("%d+%d=%d" , (num / 1000) , ((num % 1000) / 100) , (num % 100) ) ;
    }else if( (num / 100) + (num % 100) / 10 == num % 10 ){
        printf("%d+%d=%d" , (num / 100) , ((num % 100) / 10) , (num % 10) ) ;
    }else{
        printf("No Equation Found") ;
    }
    return 0;
}