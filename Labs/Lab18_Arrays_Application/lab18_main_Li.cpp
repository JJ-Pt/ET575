/*
QiuLiangJun Li
Nov 26, 2025
Lab 18: Arrays Application
*/

#include <iostream>
#include "lab18_function_Li.cpp"

using namespace std;

int main()
{
    const int SIZE = 5;
    // call function to collect 5 non-zero intergers
    int arr[SIZE];
    int size_arr = collectnumber(arr);
    
    // call function to calculate average
    float average = Averagenumber(arr, size_arr);
    cout << "The average is: " << average << endl;

    // call function to find the closest number to the average
    int closest_num = Closestmean(arr, size_arr, average);
    Printresult(average, closest_num);


    return 0;
}

