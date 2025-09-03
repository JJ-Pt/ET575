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

    cout<<"\n----- example 2: assignment operator -----" << endl;
    int number1 = 10;
    int number2 = 3;
    cout<<"original number1 = "<< number1<<endl;
    number1 ++;
    cout<<"updated number1 = " <<number1<<endl;
    cout<<"updated number2 = " <<number2<<endl;
    number2 --;
    cout<<"updated number2 = " << number2 << endl;
    number2 += 5;
    cout<<"updated number2  by 5 = " << number2 << endl;
    number1 *=2 ;
    cout<<"updated number1 using *=2 -->  " <<number1<<endl;

    cout<<"The remainder of  " << number1 <<" and " <<number2<<" is "<<number1%number2<<endl;
    cout<<"number1 = "<<number1<<endl;
    cout<<"number2 = "<<number2<<endl;

    number1 % number2;
    cout<<"after %=, number1 = " <<number1<<endl;
    cout<<"after %=, number2 = " <<number2<<endl;

    cout<<"\n----- example 3: comparison operator -----" << endl;
    cout<<"is number1 equal to number2? " << (number1 == number2) << endl;
    cout<<"is number1 greater than number2? " << (number1 > number2) << endl;
    cout << "is number1 less than number2? " << (number1 < number2) << endl;
    cout << "is number1 not equal to number2? " << (number1 != number2)<<endl;


    cout<<"\n----- exercise:  Simple Calculator and Logical Operations -----" << endl;
    int a;
    int b;
    cout << "Enter the first number(a): ";
    cin >> a;
    cout << "Enter the second number(b): ";
    cin >> b;


    //increase a by 10
    a += 10;
    // decreace b by 5
    b -= 5;

    cout << "Update A value = " << a;
    cout << "Update B value = " << b;

    return 0;
}

