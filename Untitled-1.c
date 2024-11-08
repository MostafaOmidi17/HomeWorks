//403110393 mostafa omidi
#include<stdio.h>

int main(){
    int base_x , base_y , base_o , x , y ;
    scanf("%d %d %d" , &base_x , &base_y , &base_o) ;
    switch(base_x){
        case 8 :
        scanf("%o" , &x) ;
        switch(base_y){
            case 8 :
            scanf("%o" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
            case 10 :
            scanf("%d" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
            case 16 :
            scanf("%x" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
        }
        break ;
        case 10 :
        scanf( "%d" , &x) ;
        switch(base_y){
            case 8 :
            scanf("%o" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
            case 10 :
            scanf("%d" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
            case 16 :
            scanf("%x" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
        }
        break ;
        case 16 :
        scanf("%x" , &x) ; 
        switch(base_y){
            case 8 :
            scanf("%o" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
            case 10 :
            scanf("%d" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
            case 16 :
            scanf("%x" , &y) ;
            switch(base_o){
                case 8 :
                printf("%o" , x + y) ;
                break ;
                case 10 :
                printf("%d" , x + y) ;
                break ;
                case 16 :
                printf("%x" , x + y) ;
                break ;
            }
            break ;
        }
        break ;
    }
    return 0 ;
}