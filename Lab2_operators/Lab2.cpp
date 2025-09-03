/*
QiuLiangJun Li
Lab 2, operators
Sep 2, 2025
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- example 1: arithmetic operator -----" << endl;
    // set number format
    cout.setf(ios::fixed);
    cout.precision(3);
    // calculate the height of a free falling object
    // free_fall = o.5 gravity*time*time
    // declare the varibales
    const float Gravity = 9.8;
    // delcare variable height and time
    float height=0 , time=0;
    // collect the falling time
    cout << "Enter a falling time: ";
    cin>>time;
    // calculate the height of a free fall object
    height = 0.5 * Gravity * time * time;
    // print results
    cout<<"The height of a free fall obejct at " << time << " seconds is " << height<< " meters" <<endl;

    cout<<"ln----- example 2: assignment operator -----" << endl;
    int number1 = 10;
    int number2 = 3;
    cout<<"original number1 = "<< number1<<endl;
    number1 ++;
    cout<<"updated number1 = " <<number1<<endl;
    cout<<"updated number2 = " <<number2<<endl;
    number2 --;
    cout<<"updated number2 = " << number2 << endl;

    cout<<"\n----- exercise:  Simple Calculator and Logical Operations -----" << endl;
    int a;
    int b;
    cout << "Enter the first number(a): ";
    cin >> a;
    cout << "Enter the second number(b): ";
    cin >> b;

    a += 10;
    b -= 5;

    cout << a;

    return 0;
}

