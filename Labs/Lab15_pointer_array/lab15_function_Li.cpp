/*
QiuLiangJun Li
Onv 12, 2025
lab 14: introduction to array, pointer and reference
*/

#include <iostream>
using namespace std;

// Example 1: Pointers
void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    // declare the pointer
    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    // tesing the memory address
    cout << "Memory address of int: " << pointerint << endl;

    // pointer with initial vaule. Vaule is the memory address of the pointed variable
    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;

    // cheack reference vaule of each pointer
    cout << "Reference vaule int = " << pointerint << endl;
    cout << "Reference vaule char = " << pointerchar << endl;
    cout << "Reference vaule string = " << pointerstring << endl;

    // dereference operators
    cout << "Dereference vaule int = " << *pointerint << endl;
    cout << "Dereference vaule char = " << *pointerchar << endl;
    cout << "Dereference vaule string = " << *pointerstring << endl;
}

// Example 2
// function that passes a value
void printValue(string v){
    cout << "Value = "<< v <<endl;
    v = "inside printvalue function";
}

// function that passes a reference
void printReference(string& v){
    cout << "Reference = " << v << endl;
    v = "Updated sentence";
}

// function that passes a memory address
void printaddress(string* v){
    cout<<"Pass memory address =  "<< v <<endl;
}

// example 3: arrays
void arrays(){
    // declare an array with five vaules
    int scores[5];
    cout << "Array = " << scores << endl;

    // assigning / accessing individual cells in an array
    scores[0] = 60; // first value has index 0
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    cout << "Array = "<<scores << endl;
    cout<<"The third score is "<<scores[2]<<endl; // print the third value in the array

    // initializing values in an array
    int age_children[3] = {12,8,5};
    cout<<"The 1st age = "<< age_children[0]<<endl;

    // when an array is declared with initial value, the size of the array can be omitted
    string names[] = {"Annie","Peter","Carl","Charles","Brian"};
    cout << "The fourth name is "<<names[3]<<endl;
}

void sizeofarrays(){
    cout<<"size of char "<< sizeof(char) <<endl;
    cout<<"size of int "<< sizeof(int) <<endl;
    cout<<"size of double "<< sizeof(double) <<endl;
    cout<<"size of string "<< sizeof(string) <<endl;
}