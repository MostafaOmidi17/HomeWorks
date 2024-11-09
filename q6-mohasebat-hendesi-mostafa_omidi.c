//403110393 mostafa omidi
#include<stdio.h>
#include<math.h>

int main(){
    const double PI = 3.14159265358979323846 ;
    double square_num = 1 ;
    double rectanngle_num = 2 ;
    double circle_num = 3 ;
    double triangle_num = 4 ;
    double num ;
    double Perimeter ;
    double Area ;
    scanf( "%lf" , &num ) ;
    if( num == square_num ){
        double side ;
        scanf( "%lf" , &side ) ; 
        printf( "Perimeter: %0.2lf\nArea: %0.2lf" , 4 * side , side * side ) ;
    }else if( num == rectanngle_num ){
        double length ;
        double width ;
        scanf( "%lf %lf" , &length , &width ) ;
        printf( "Perimeter: %0.2lf\nArea: %0.2lf" , (2 * length + 2 * width) , length * width ) ;
    }else if( num == circle_num ){
        double radius ; 
        scanf( "%lf" , &radius ) ;
        printf( "Perimeter: %0.2lf\nArea: %0.2lf" , 2 * PI * radius , PI * radius * radius ) ;
    }else if( num == triangle_num ){
        double a , b , c ;
        scanf( "%lf %lf %lf" , &a , &b , &c ) ;
        double P ;
        P = 0.5 * ( a + b + c ) ;
        double A ;
        double a_1 ;
        A = sqrt( P * (P - a) * ( P - b ) * ( P - c ) ) ;
        printf( "Perimeter: %0.2lf\nArea: %0.2lf\n" , 2 * P , A ) ;
        if( a >= b && a >= c ){
            double max_side = a ;
            double other_side1 = b ;
            double other_side2 = c ;
            if( max_side * max_side == other_side1 * other_side1 + other_side2 * other_side2 ){
                printf( "Type: Right" );
            }else if( max_side * max_side > other_side1 * other_side1 + other_side2 * other_side2 ){
                printf( "Type: Obtuse" );
            }else{
                printf( "Type: Acute" ) ;
            }
        }else if( b >= a && b >= c ){
            double max_side = b ;
            double other_side1 = a ;
            double other_side2 = c ;
            if( max_side * max_side == other_side1 * other_side1 + other_side2 * other_side2 ){
                printf( "Type: Right" );
            }else if( max_side * max_side > other_side1 * other_side1 + other_side2 * other_side2 ){
                printf( "Type: Obtuse" );
            }else{
                printf( "Type: Acute" ) ;
            }
        }else if( c >= a && c >= b){
            double max_side = c ;
            double other_side1 = a ;
            double other_side2 = b ;
            if( max_side * max_side == other_side1 * other_side1 + other_side2 * other_side2 ){
                printf( "Type: Right" );
            }else if( max_side * max_side > other_side1 * other_side1 + other_side2 * other_side2 ){
                printf( "Type: Obtuse" );
            }else{
                printf( "Type: Acute" ) ;
            }
        }
    }
    return 0 ;
}