#include <stdio.h>

//binary search. it is more efficient but we should sort the code.



int binary_search(int n , int target , int student_numbers[]){
    int s_1 = 0 , s_2 = n - 1 ;
    while(s_1 <= s_2){
        int q = (s_1 + s_2) / 2 ;
        if(student_numbers[q] == target){
            return q;
        }else if(student_numbers[q] > target){
            s_2 = q - 1;
            continue;
        }else{
            s_1 = q + 1;
        }
    }
    return -1;
}




int main(){

    int stdu_numbers[100] = {5 , 8 , 10 , 12 , 67 , 79 , 110} ;
    int target_number = 67;
    printf("%d ", binary_search(7 , target_number , stdu_numbers));
    // it calls the address of stdu_numbers;(call by value).
    //we can really change the students_numbers in function because we call stdu_numbers .
    //we ussually say this is the "call by pointer".


    return 0;
}