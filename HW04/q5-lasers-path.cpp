//403110393 mostafa omidi.
#include <stdarg.h>
#include <stdio.h>
#include "grader.h"



//calculating the average.
double average(int n, ...) {
    va_list args;
    va_start(args , n);

    double average = 0;
    for(int i = 0 ; i < n ; i++){
        average += va_arg(args , double);
    }
    average = average / n ;

    va_end(args);
    return average;
}


//calculating variance.
double variance(int n, ...) {
    va_list args;
    va_start(args , n);


    double values[n];
    for(int i = 0 ; i < n ; i++){
        values[i] = va_arg(args, double);
    }

    double average = 0;
    for(int i = 0 ; i < n ; i++){
        average += values[i];
    }
    average = average / n ;

    double variance = 0;
    for(int i = 0 ; i < n ; i++){
        variance += (values[i] - average) * (values[i] - average) ;
    }
    variance = variance / (n - 1);
    return variance;
}


//calculating a.
double calculate_a(int n, double average_x, double average_y, double average_xy, double variance_x) {
    double a = (n*(average_xy - average_x * average_y)) / ((n-1)*variance_x) ;
    return a;
}



//calculating a.
double calculate_b(double a, double average_x, double average_y) {
    double b = average_y - a * average_x ;
    return b;
}

