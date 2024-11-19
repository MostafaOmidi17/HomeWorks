//403110393 mostafa omidi

#include<stdio.h>
#include<math.h>

int main(){
    int num_1 = 0 , num_2 = 0 , num_3 = 0 ;
    long long int a[5];
    int b[3];
    for(int i = 0 ; i < 5 ; i++){
        scanf("%llu" , &a[i]);
    }
    long long int first_num = a[0];
    long long int second_num = a[1];
    for(int i = 0 ; i <= 31 ; i++){
        num_1 = ((first_num >> i) & 1) + num_1;
        num_2 = ((second_num >> i) & 1) + num_2;
    }
    // printf("%d\n" , num_1);
    long long int checker = (first_num & second_num);
    for(int i = 0 ; i < 31 ; i++){
        num_3 = ((checker >> i) & 1) + num_3;
    }
    int num_change = num_1 + num_2 - (2 * num_3) ;
    for(int j = 2 ; j < 5 ; j++){
        int controller = (a[j] - num_change);
        if((controller % 2 == 0) && (controller > 0)){
            b[j - 2] = 1;
        }else{
            b[j - 2] = 0;
        }
    }
    for(int k = 0 ; k < 3 ; k++){
        if( b[k] == 1 ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}