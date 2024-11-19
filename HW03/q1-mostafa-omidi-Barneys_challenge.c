//403110393 mostafa omidi
#include<stdio.h>
#include<math.h>

int main(){
    int n ; 
    int counter = 0 ; 
    int power = 0 ;
    int second_counter = 0 ;
    scanf("%d" , &n) ;
    int a[n] ;
    int num[n] ;
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &num[i]) ;
        int num_copy = num[i] ;
        int num_copy_copy = num[i] ;
        while(num_copy > 0){
            power += 1 ;
            num_copy = num_copy/10 ;
        }
        while(num_copy_copy > 0){
            counter = pow((num_copy_copy % 10) , power) + counter ;
            num_copy_copy = num_copy_copy/10 ;
        }
        if(counter == num[i]){
            a[second_counter] = 1 ;
            second_counter += 1 ;
        }else{
            a[second_counter] = 0 ;
            second_counter += 1 ;
        }
        counter = 0 ;
        power = 0 ;
    }
    for(int j = 0 ; j < n ; j++){
        if(a[j] != 0){
            printf("%d is Armstrong\n" , num[j]) ;
        }else{
            printf("%d is Not Armstrong\n" , num[j]) ;
        }
    }
    return 0;
}