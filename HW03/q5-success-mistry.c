//403110393 mostafa omidi


#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d" , &n);

    int a[n];
    int rev[n];
    int doub[n];

    for(int i = 0 ; i < n ; i++)
        scanf("%d" , &a[i]);

    char kar;
    while(kar != 'e'){
        int coloumn_1 ;
        int coloumn_2 ;
        scanf("%c %d %d" , &kar , &coloumn_1 , &coloumn_2);
        int mod_coloumn_1 = coloumn_1 - 1;
        int mod_coloumn_2 = coloumn_2 - 2;
        switch(kar){
            case 'r':
                for(int i = 0 ; i < n ; i++){
                    if( (i >= mod_coloumn_1) && (i <= mod_coloumn_2) ){
                        rev[i] = a[mod_coloumn_2 + mod_coloumn_1 - i];
                    }else{
                        rev[i] = a[i];
                    }
                }
                for(int i = 0 ; i < n ; i++){
                    a[i] = rev[i];
                }
                break;
            
            case 's':
                for (int i = mod_coloumn_1 ; i < coloumn_2 - 2 ; i++) {
                    int min_idx = i;
                    for (int j = i + 1; j < coloumn_2 - 1; j++) {
                        if (a[j] < a[min_idx])
                            min_idx = j;
                    }
                    if (min_idx != i) {
                            int temp = a[min_idx];
                            a[min_idx] = a[i];
                            a[i] = temp;
                    }
                }
                break;
            
            case 'd':
                for(int i = 0 ; i < n ; i++){
                    if( (i >= mod_coloumn_1) && (i <= mod_coloumn_2) ){
                        doub[i] = 2*a[i];
                    }else{
                        doub[i] = a[i];
                    }
                }
                for(int i = 0 ; i < n ; i++){
                    a[i] = doub[i];
                }
                break;
        }
    }


    for(int i = 0 ; i < n ; i++)
        printf("%d " , a[i]);



    return 0;
}




