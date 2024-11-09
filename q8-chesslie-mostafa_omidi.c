//403110393 mostafa omidi
#include<stdio.h>
#include<math.h>

int main(){
    unsigned long long int chess_plot , line_1 , line_2 , line_3 , line_4 , line_5 , line_6 , line_7 , line_8 ;
    unsigned long long int a_1 = pow(2 , 8) , a_2 = pow(2 , 16) , a_3 = pow(2 , 24) , a_4 = pow(2 , 32) , a_5 = pow(2 , 40) , a_6 = pow(2 , 48) , a_7 = pow(2 , 56) ;
    scanf("%llu" , &chess_plot) ;
    line_1 = ( chess_plot % a_1 ) ;
    line_2 = ( (chess_plot % a_2) / a_1) ;
    line_3 = ( ( chess_plot % a_3 ) / a_2 ) ;
    line_4 = ( (chess_plot % a_4 ) / a_3 ) ;
    line_5 = ( (chess_plot % a_5) / a_4 ) ;
    line_6 = ( (chess_plot % a_6) / a_5 ) ;
    line_7 = ( (chess_plot % a_7) / a_6 ) ;
    line_8 = ( chess_plot / a_7 ) ;
    int b_1 = line_1 & ( line_1 - 1 ) ;
    int b_2 = line_2 & ( line_2 - 1 ) ;
    int b_3 = line_3 & ( line_3 - 1 ) ;
    int b_4 = line_4 & ( line_4 - 1 ) ;
    int b_5 = line_5 & ( line_5 - 1 ) ;
    int b_6 = line_6 & ( line_6 - 1 ) ;
    int b_7 = line_7 & ( line_7 - 1 ) ;
    int b_8 = line_8 & ( line_8 - 1 ) ;
    int counter_Yes = 0 ;
    int condi_1 = line_1 & line_2 , condi_2 = line_1 & line_3 , condi_3 = line_1 & line_4 , condi_4 = line_1 & line_5 , condi_5 = line_1 & line_6 , condi_6 = line_1 & line_7 , condi_7 = line_1 & line_8 ;
    int condi_8 = line_2 & line_3 , condi_9 = line_2 & line_4 , condi_10 = line_2 & line_5 , condi_11 = line_2 & line_6 , condi_12 = line_2 & line_7 , condi_13 = line_2 & line_8 ; 
    int condi_14 = line_3 & line_4 , condi_15 = line_3 & line_5 , condi_16 = line_3 & line_6 , condi_17 = line_3 & line_7 , condi_18 = line_3 & line_8 ;
    int condi_19 = line_4 & line_5 , condi_20 = line_4 & line_6 , condi_21 = line_4 & line_7 , condi_22 = line_4 & line_8 ;
    int condi_23 = line_5 & line_6 , condi_24 = line_5 & line_7 , condi_25 = line_5 & line_8 ;
    int condi_26 = line_6 & line_7 , condi_27 = line_6 & line_8 ;
    int condi_28 = line_7 & line_8 ;
    switch(b_1){
        case 0 :
            if(condi_1 != 0 || condi_2 != 0 || condi_3 != 0 || condi_4 != 0 || condi_5 != 0 || condi_6 != 0 || condi_7 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_2){
        case 0 :
            if( condi_8 != 0 || condi_9 != 0 || condi_10 != 0 || condi_11 != 0 || condi_12 != 0 || condi_13 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_3){
        case 0 :
            if( condi_14 != 0 || condi_15 != 0 || condi_16 != 0 || condi_17 != 0 || condi_18 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_4){
        case 0 :
            if( condi_19 != 0 || condi_20 != 0 || condi_21 != 0 || condi_22 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_5){
        case 0 :
            if( condi_23 != 0 || condi_24 != 0 || condi_25 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_6){
        case 0 :
            if( condi_26 != 0 || condi_27 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_7){
        case 0 :
            if( condi_28 != 0 ){
                counter_Yes += 1 ;
            }
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    switch(b_8){
        case 0 :
            break ;
        default :
            counter_Yes += 1 ;
            break ;
    }
    if(counter_Yes == 0){
        printf("NO") ;
    }else{
        printf("YES") ;
    }
    return 0 ;
}