/*
Homework 1: strings, string methods, and numerical variables
QiuLiangJun Li
Sep 10, 2025
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // declare variables
    string str1 = "Welcome to ";
    string city = "New York City ";
    string name = "";
    // collect name from user
    cout << "Enter your name: ";
    cin >> name;

    // concatenate strings, and print the result
    string str2 = str1 + city + name;
    // print the concatenated message
     cout << "concatenated message: "<< str2 << endl;

    // find the length of string variable, and print the result
    int length_str = str2.length();
    cout << "Message length: " << length_str << endl;

    // find the word ma, and store in a variable
    int index_ma = str2.find("ma");
    cout << "The index of ma = " << index_ma << endl;

    // replace ma with %--%
    str2.replace(index_ma,2,"%%");
    cout << "Replace 'ma' with %---%: " << str2 <<endl;
    
    return 0;

}