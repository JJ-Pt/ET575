/*
QiuLiangJun Li
Lab 3, operators
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

    cout<<"\n----- example 4: logical operator -----" << endl;
    // AND operator
    bool check_numbers = (number1 != number2) && (number1 < number2) && (number1 > 5);
    // number1 != number2 --> true
    // number1 < number2 --> true
    // number1 > 5 --> false
    // check_numbers = true && true && false = false
    cout<<"The result of check_number is " << check_numbers<<endl;

    // OR Operator
    bool check_or = (number2 > 10) || (number2 != 3) || (number2<number1);
    // number2 > 10 --> false
    // number2 != 3 --> true
    // number2 <number1 --> false
    // false || true || false = true
    cout <<"The result of check_number is " << check_or<<endl;

    cout<<"\n----- example 5: casting ----- " << endl;
    int n =5;
    float m = n/2;
    cout << "implicit casting = " << m<<endl;

    cout<<"\n----- exercise:  Simple Calculator and Logical Operations -----" << endl;
    int a;
    int b;

    //Arithmetic Operations:
    cout << "Enter the first number(a): ";
    cin >> a;
    cout << "Enter the second number(b): ";
    cin >> b;

    cout << "the result of a + b = " << a+b << endl;
    cout << "the result of a - b = " << a-b << endl;
    cout << "the result of a * b = " << a*b << endl;
    cout << "the result of a / b = " << a/b << endl;
    cout << "the result of a % b = " << a%b << endl;
    
    //Assignment Operations:
    //increase a by 10
    a += 10;
    // decreace b by 5
    b -= 5;
    cout << "Update value of a = " << a << endl;
    cout << "Update value of b= " << b << endl;

    // Boolean operations
    cout<<"is a greater than b? " << (a > b) << endl;
    cout<<"is a equal to b? " << (a == b) << endl;
    cout<<"is a not equal to b? " << (a != b) << endl;
    cout<<"is A and B both positive? " << (a&&b > 0) << endl;
    cout<<"is either A or B a negative number? " << (a < 0 || b < 0) << endl;
    cout<<"Is a not greater than b? " << (!(a>b))<<endl;

    return 0;
}

