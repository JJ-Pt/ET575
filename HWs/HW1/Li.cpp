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

    // concatenate strings
    string str2 = str1 + city + name;
    cout << "concatenated message: " << str2;

    // find the length of string variable
    int length_str = str2.length();

    // find the word ma, and store in a variable
    int index_ma = str2.find("ma");

    // replace ma with %---%
    string str3 = str2.replace(index_ma, 2, "%---%");

    // print all results in a single line with tab alignment
    cout << "\nMessage length: " << length_str << "\t"
         << "\nThe index of ma = " << index_ma << "\t"
         << "\nReplace 'ma' with %---%: " << str3 << endl;

    return 0;

}