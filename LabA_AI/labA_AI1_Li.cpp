#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Please enter two integers (separated by space): ";
    cin >> a >> b;

    // Arithmetic operations
    cout << "\nArithmetic operation results:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    if (b != 0) {
        cout << "a / b = " << a / b << endl;
        cout << "a % b = " << a % b << endl;
    } else {
        cout << "a / b = undefined (divisor is 0)" << endl;
        cout << "a % b = undefined (divisor is 0)" << endl;
    }

    // Assignment operations
    a += 10;
    b -= 5;
    cout << "\nAfter assignment operations:" << endl;
    cout << "a += 10 -> a = " << a << endl;
    cout << "b -= 5  -> b = " << b << endl;

    // Logical operations
    cout << "\nLogical operation results:" << endl;
    cout << "Is a > b? " << (a > b ? "Yes" : "No") << endl;
    cout << "Is a == b? " << (a == b ? "Yes" : "No") << endl;
    cout << "Is a != b? " << (a != b ? "Yes" : "No") << endl;
    cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "Yes" : "No") << endl;
    cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "Yes" : "No") << endl;
    cout << "Is a not greater than b? " << (!(a > b) ? "Yes" : "No") << endl;

    return 0;
}

/*
// --- AI Assistant Used: GitHub Copilot ---
// Was the code correct? (Yes/No)
YES

// Was it readable and properly commented?
I understand most part of the code, little commented was made

// Were you able to explain each line of code?
I could explian part of the code

// Did it use the same programming concepts we learned in class?
We learned the most in class, but not all like the if else statement

// Terminal Output: (Paste the output of your program here)
Please enter two integers (separated by space): 15
10

Arithmetic operation results:
a + b = 25
a - b = 5
a * b = 150
a / b = 1
a % b = 5

After assignment operations:
a += 10 -> a = 25
b -= 5  -> b = 5

Logical operation results:
Is a > b? Yes
Is a == b? No
Is a != b? Yes
Are both a and b positive? Yes
Is either a or b negative? No
Is a not greater than b? No
*/
