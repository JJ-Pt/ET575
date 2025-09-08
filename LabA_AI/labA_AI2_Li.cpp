#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Arithmetic Operations
    cout << "\nArithmetic Operations:" << endl;
    cout << "Addition (a + b) = " << (a + b) << endl;
    cout << "Subtraction (a - b) = " << (a - b) << endl;
    cout << "Multiplication (a * b) = " << (a * b) << endl;

    if (b != 0) {
        cout << "Division (a / b) = " << (a / b) << endl;
        cout << "Modulus (a % b) = " << (a % b) << endl;
    } else {
        cout << "Division and modulus cannot be performed (b = 0)" << endl;
    }

    // Assignment Operations
    cout << "\nAssignment Operations:" << endl;
    a += 10;  // Increment a by 10
    b -= 5;   // Decrement b by 5
    cout << "Updated value of a: " << a << endl;
    cout << "Updated value of b: " << b << endl;

    // Boolean (Logical) Operations
    cout << "\nBoolean (Logical) Operations:" << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Are both a and b positive? " << ((a > 0) && (b > 0)) << endl;
    cout << "Is either a or b negative? " << ((a < 0) || (b < 0)) << endl;
    cout << "Is a not greater than b? " << (!(a > b)) << endl;

    return 0;
}

/*
// --- AI Assistant Used: ChatGPT ---

// Was the code correct? (Yes/No)
YES

// Was it readable and properly commented?
The code work, and contains short comment

// Were you able to explain each line of code?
I could understand part of the common

// Did it use the same programming concepts we learned in class?
Most of the concepts used in the progam, where teached in class

// Terminal Output: (Paste the output of your program here)
Enter two integers: 15
10

Arithmetic Operations:
Addition (a + b) = 25
Subtraction (a - b) = 5
Multiplication (a * b) = 150
Division (a / b) = 1
Modulus (a % b) = 5

Assignment Operations:
Updated value of a: 25
Updated value of b: 5

Boolean (Logical) Operations:
Is a greater than b? 1
Is a equal to b? 0
Is a not equal to b? 1
Are both a and b positive? 1
Is either a or b negative? 0
Is a not greater than b? 0
*/