#include <stdio.h>

//function uses spaces and save function as stacks. and starts to run the code.
//every time that we use variables in functions it runs them diffrently.
//creating a function with array. 
//searching function eg : 1) linear search(it is not a good alogrithm). estimated time :|O(n)| 2) binary search. estimated time :|log(n)|

int linear_search(int n , int target , int student_numbers[]){
    // int ans = -1;
    for(int i = 0 ; i < n ; i++){
        if(student_numbers[i] == target){
            return i + 1;
        }
    }
    return -1;
}




int main(){

    int stdu_numbers[100] = {5 , 8 , 10 , 12 , 67 , 34 , 78} ;
    int target_number = 12;
    printf("%d ", linear_search(7 , target_number , stdu_numbers));
    // it calls the address of stdu_numbers;(call by value).
    //we can really change the students_numbers in function because we call stdu_numbers .
    //we ussually say this is the "call by pointer".


    return 0;
}