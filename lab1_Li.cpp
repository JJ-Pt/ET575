/*
QiuLiangJun LI
Aug 27, 2025
Lab 1, iostream
*/
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "-----Example 1: cout data-----" << endl;
    cout << "This is a C++ code";
    // variables = temporary storage of data
    
    // inclass example
    string username = "Perterpen123";
    cout << "\nWelcome to C++ " << username << endl;
    
    cout << "-----Example 2: cin data-----" << endl;
    cout << "Enter a new username: ";
    cin >> username;
    cout << "The user is " << username << endl;
    
    
    cout << "-----Exercise-----" << endl;
    string country;
    char gender;
    int zipcode;
    double rate;

    cout << "Enter a country: ";
    cin >> country;

    cout << "Enter a gender (f for female, m for male, and o for others): ";
    cin >> gender;

    cout << "Enter a zip code: ";
    cin >> zipcode;

    cout << "Enter a tax rate: ";
    cin >> rate;

    // Display all collected data with proper alignment using \t
    cout << "\n-----Results-----" << endl;
    cout << "Entered country:\t\t" << country << endl;
    cout << "Selected gender:\t\t" << gender << endl;
    cout << "Zip code:\t\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t\t" << rate << endl;
    
    return 0;
}