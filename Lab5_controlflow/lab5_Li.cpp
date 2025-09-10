/*
QiuLiangJun Li
lab 5, control flow
Sep 10, 2025
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<<"\n ----- Example 1: boool variable ----- " << endl;
    //check if a number is positive
    // step 1) declare and collecr a number
    int n;
    cout << "Enter an number: ";
    cin >> n;
    // step 2) check if the number is positive
    bool checkPositive = (n >= 0);
    // step 3) print the result
    cout<<"Is "<<n<<" positive? "<<checkPositive<<endl;
    



    return 0;
}