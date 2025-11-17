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
    printarray(arraysize, arrnum);

    cout << "\n-----Example 2: Program to search a number in an array -----" << endl;
    // Initialize variables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;
    int targetnumber = 8;
    // calling functions
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers); // Testing if the
    int resultsearch = search(arr_pos_numbers, listsize, targetnumber);
    printresult(resultsearch, targetnumber);

    return 0;
}