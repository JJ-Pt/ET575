/*
QiuLiangJun Li
Sep 15, 2025
Lab 7, branching mechanism using switch-case statement
*/

#include <iostream>

using namespace std;

int main(){
    // delcare the identifiers
    int num1,num2;
    char choice = ' ';
    // display a message and collect the two numbers
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    // select an operation using switch-case statement
    cout<<"Choose an operation by entering one of the following characters: "<<endl;
    cout<<"+ for addition"<<endl;
    cout<<"- for subtraction"<<endl;
    cout<<"* for multiplication"<<endl;
    cout<<"/ for division"<<endl;
    cout<<"% for modulus"<<endl;
    cout<<"q or Q to quit the program"<<endl;
    cin>>choice;

    switch(choice)
    {
        case '+':
            cout<<"Result: "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Result: "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Result: "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            if(num2!=0)
                cout<<"Result: "<<num1<<" / "<<num2<<" = "<<float(num1)/float(num2)<<endl;
            else
                cout<<"Error: Second number can not equal zero"<<endl;
            break;
        case '%':
            cout<<"Result: "<<num1<<" % "<<num2<<" = "<<num1%num2<<endl;
            break;
        case 'q': case 'Q':
            cout<<"Result: "<<"Exit the program."<<endl;
            break;
        default:
            cout<<"Error: Invalid operation."<<endl;
            break;
    }
    return 0;
}