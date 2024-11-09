//403110393 mostafa omidi
#include<stdio.h>
#include<math.h>

int main(){
    double a , b , c , d ; // getting the values
    double x_1 , x_2 ; // defining the exterma points
    scanf("%lf %lf %lf %lf" , &a , &b , &c , &d) ;
    double Delta = pow(b, 2) - 3 * a * c ; // this is the third degree delta which clarify that we have exterma or not
    if(Delta < 0){
        printf("No Local Extrema Points") ;
    }else{
        x_1 = ( -b + sqrt(Delta) ) / ( 3 * a ) ;
        x_2 = ( -b - sqrt(Delta) ) / ( 3 * a ) ;
        if(x_1 < x_2){
            printf("%0.2lf, %0.2lf" , x_1 , x_2) ;
        }else{
            printf("%0.2lf, %0.2lf" , x_2 , x_1) ;
        }
    }
    return 0 ;
}