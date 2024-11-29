#include <stdio.h>

//binary search. it is more efficient but we should sort the code.

//from s_1 to s_2 searches the target.
//recursive function example :

int binary_search(int s_1 , int s_2 , int target , int student_numbers[]){
    if(s_1 > s_2){
        return -1;
    }
    int q = (s_1 + s_2) / 2;
    if(student_numbers[q] == target){
        return q;
    }
    if(student_numbers[q] > target)
        return binary_search(s_1 , q - 1 , target , student_numbers);
    return binary_search(q + 1 , s_2 , target , student_numbers);
}


int main(){

    int stdu_numbers[100] = {5 , 8 , 10 , 12 , 17 , 24 , 29 , 79} ;
    int target_number = 24;
    printf("%d ", binary_search(0 , 7 , target_number , stdu_numbers));
    // it calls the address of stdu_numbers;(call by value).
    //we can really change the students_numbers in function because we call stdu_numbers .
    //we ussually say this is the "call by pointer".


    return 0;
}