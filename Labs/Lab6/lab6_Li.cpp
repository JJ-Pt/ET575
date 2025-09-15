/*
QiuLiangJun Li
Sep 15, 2025
lab 6, nested conditional statements and switch
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"\n----- Example 1: nested conditional statements -----" << endl;
    int n = -8;
    if (n>0){
        cout<<"The number is positive"<<endl;
        if(n%2==0){
            cout<<"The number is positive and EVEN"<<endl;
        }
        else{
            cout<<"The number is positive and ODD" << endl;
        }
    }
    else if(n<0){
        if(n%2==0){
            cout<<"The number is negative and EVEN"<<endl;
        }
        else{
            cout<<"The number is negative and ODD" << endl;
        }
    }
    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<"\n----- Example 2: organize three numbers in decreasing order -----" << endl;
    // delcare the identifiers (variable names)
    int num1,num2,num3;

    // display a message and collect the three numbers
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    // check if num1 is greater than num2 and num3
    if(num1>num2 && num1>num3){
        if(num2 > num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num2 is the greatest
    else if(num2>num1 && num2>num3){
        if (num1 > num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else if(num3>num1 && num3>num2){
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    else{
        cout<<"All three numbers are the same!"<< endl;
    }

    cout<<"\n----- Example 3: switch -----"<< endl;
    // select a day-off using switch-case stament
    int dayoff;
    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cout<<"6 for Saturday"<<endl;
    cout<<"7 for Sunday"<<endl;
    cin>>dayoff;

    switch(dayoff)
    {
    case 1:
        cout<<"You are off on Monday"<<endl;
        break;
    case 2:
        cout<<"You are off on Tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off on Wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off on Thursday"<<endl;
        break;
    case 5:
        cout<<"You are off on Friday"<<endl;
        break;
    case 6:
        cout<<"You are off on Saturday"<<endl;
        break;
    case 7:
        cout<<"You are off on Sunday"<<endl;
        break;   

    default:
        cout<<"Unable to read the day-off"<<endl;
        break;
    }

    cout<<"\n----- Example 4: switch to select a gender -----"<< endl;
    char gender=' ';
    cout<<"Select a gender: "<<endl;
    cout<<"m or M for male"<<endl;
    cout<<"f or F for female"<<endl;
    cout<<"o or O for others"<<endl;
    cin>>gender;

    switch(gender)
    {
    case 'm': case 'M':
        cout << "Gender = MALE "<< endl;
        break;
    case 'f': case 'F':
        cout<< "Gender = FEMALE"<<endl;
    case 'o': case 'O':
        cout<<"Gender = OTHERS"<<endl;
        break;
    default:
        cout<<"Gender = UNDEFINED"<<endl;
        break;
    }
    
    cout<<"\n----- Exercise 1: nested conditional statement -----" << endl;
    int saving;
    cout<<"Enter your saving amount: ";
    cin>>saving;

    if(saving<199999 && saving>0){
        cout << "Keep saving!" << endl;
    }
    else if(saving>=200000 && saving<=500000){
        if(saving>=200000 && saving<=300000){
            cout<<"With $"<<saving<<" you can afford a aprtment or co-op with a studio"<< endl;
        }
        else if(saving>=300001 && saving<=400000){
            cout<<"With $"<<saving<<" you can afford a aprtment or co-op with 1 bedroom and 1 bathroom"<< endl;
        }
        else
            cout<<"With $"<<saving<<" you can afford a aprtment or co-op with 2 bedrooms and 1 bathroom"<< endl;
    }
    else if(saving>=500001 && saving<=1000000){
        if(saving>=500001 && saving<=700000){
            cout<<"With $"<<saving<<" you can afford a house with 2 bedrooms and 2 bathrooms"<< endl;
        }
        else
            cout<<"With $"<<saving<<" you can afford a house with 3 bedrooms and 3 bathrooms"<< endl;
    }
    else if(saving>=1000001)
        cout<<"Mansion!"<<endl;
    else
        cout<<"Have some saving!"<<endl;

    cout<<"\n----- Exercise 2: switch-case statement -----"<< endl;
    // declare the identifier
    int number;
    char double_number = ' ';
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Select your decision: "<< endl;
    cout<<"Do you want to double the number?: " << endl;
    cout<<"y or Y for yes"<< endl;
    cout<<"n or N for no"<< endl;
    cout<<"For any other character, the number will reset to 0"<< endl;
    cin>>double_number;

    switch(double_number)
    {
    case 'y': case 'Y':
       number *= 2;
       break;
    case 'n': case 'N':
        number = number;
        break;
    default:
        number = 0;
        break;
    }

    cout << "The number is set to "<< number << endl;
    

    return 0;
}
