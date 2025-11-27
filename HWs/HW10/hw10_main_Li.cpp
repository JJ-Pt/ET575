/*
QiuLiangJun Li
HW 10: file streaming
*/

#include <iostream>
#include "hw10_function_Li.cpp"

using namespace std;

int main()
{   
    string file_name = "Remembering_Earth.txt";
    readfile(file_name);
    countwords(file_name);
    countEarth(file_name);

    return 0;
}