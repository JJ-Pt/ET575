/*
QiuLiangJun LI
Aug 27, 2025
Lab 1, iostream
*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "-----Exmaple 1: cout data-----" << endl;
    cout << "This is a C++ code";
    // varibles = termporary stroge of data
    
    // inclass exmaple
    string username = "Perterpen123";
    cout << "\nWelcome to C++ " << username << endl;
    
    cout << "-----Exmaple 2: cin data-----" << endl;
    cout << "Enter a new username: ";
    cin >> username;
    cout << "The user is " << username << endl;
    
    
    cout << "-----Excerise-----" << endl;
    string country;
    char gender;
    int zipcode;
    double rate;

    cout << "Enter a Country: ";
    cin >> country;

    cout << "Selected Gender (f for female, m for male, and o for others): ";
    cin >> gender;

    cout << "Enter a Zip code: ";
    cin >> zipcode;

    cout << "Tax Rate: ";
    cin >> rate;

    
    return 0;
}
