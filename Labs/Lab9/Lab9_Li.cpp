/*
QiuLiangJun Li
Oct 14, 2025
lab 9, while, do-while loop
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "\n-----Example 1: while loop as a counter------" << endl;
    //print from 1 to 5
    int n = 1;
    while(n<=5){
        cout << n << " ";
        n++;
    }

    cout<<"\n-----Example 2: while loop as a counter"<<endl;
    //print from 3 to 0
    int m = 3;
    while(m>=0){
        cout<<m<<" ";
        m--;
    }
    cout<<endl;

    cout<<"\n-----Example 3: while loop as a decrement counter"<<endl;
    m = 3;
    while(m-- >= 0){
        cout<<m<<" ";
    }
    cout<<endl;

    


    cout << "\n-----Exercise------"<<endl;
    int sum = 0;
    while(sum>=0){
        int num;
        cout<< "Enter a number (0 to END): ";
        cin >> num;
        sum += num;
        if(num == 0)
            break;
        
    }
    cout << "The total sum is: " << sum << endl;

    return 0;
}