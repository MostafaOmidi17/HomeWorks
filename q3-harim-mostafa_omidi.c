//403110393 mostafa omidi
#include <stdio.h>
#include <math.h>

int main(){
    double x , y , r;
    double x_1 , y_1 , r_1;
    scanf("%lf %lf %lf" , &x , &y , &r);
    scanf("%lf %lf %lf" , &x_1 , &y_1 , &r_1);
    double distance_sq = ( pow( (x_1 - x) , 2 ) + pow( (y_1 - y) , 2) ) ;
    double abs_sum_sq = pow((r_1 + r) , 2) ;
    double abs_dif_sq = pow((r_1 - r) , 2) ;
    if( distance_sq == abs_sum_sq || distance_sq == abs_dif_sq ){
        printf("%d" , 1);
    }
    else if( distance_sq < abs_sum_sq && distance_sq > abs_dif_sq ){
        printf("%d" , 2);
    }
    else{
        printf("%d" , 0);
    }
    return 0 ;
}