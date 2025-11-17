/*
QiuLiangJun Li
lab 16. array in a function
Nov 17, 2025
*/

#include <iostream>
#include "lab16_function_Li.cpp"

using namespace std;

int main(){
    cout << "\n-----Example 1: Collect and populate data into an array -----" << endl;
    // Initialize variables and array
    int arraysize = 3;
    int arrnum[arraysize];
    // Calling functions
    fillup(arraysize, arrnum);
    print(arraysize, arrnum);

    cout << "\n-----Example 2: Program to search a number in an array -----" << endl;
    // Initialize variables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;

    // calling functions
    fillarray(arr_pos_numbers, listsize);

    return 0;
}