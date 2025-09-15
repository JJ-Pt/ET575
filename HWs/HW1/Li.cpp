/*
Homework 1: strings, string methods, and numerical variables
QiuLiangJun Li
Sep 10, 2025
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Activity 1
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

    // Activity 2
    // Step 1: Define constant pi
    const float PI = 3.14159;

    // Step 2: Input radius and height
    float radius, height;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the height: ";
    cin >> height;

    // Step 3: Check if radius > height
    bool isRadiusGreater = (radius > height);

    // Step 4: Check if radius == height
    bool isRadiusEqual = (radius == height);

    // Step 5: Triple height and increase radius by 5
    height *= 3;       // triple the height
    radius += 5;       // increase radius by 5

    // Step 6: Check (radius != height) && (radius > height)
    bool checker1 = (radius != height) && (radius > height);

    // Step 7: Calculate volume of the cylinder
    float volume = PI * radius * radius * height;

    // Step 8: Output results with \t for alignment
    cout << "\nResults:\n";
    cout << "Radius > Height:\t" << isRadiusGreater << endl;
    cout << "Radius == Height:\t" << isRadiusEqual << endl;
    cout << "Increase Radius:\t\t" << radius << endl;
    cout << "Triple Height:\t\t" << height << endl;
    cout << "Check (r != h && r > h):\t" << checker1 << endl;
    cout << "Cylinder Volume:\t " << volume << endl;
    return 0;

}