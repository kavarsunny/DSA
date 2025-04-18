

#include <bits/stdc++.h>
using namespace std;


// void printName(string n1, int n2) {
//     // Base condition
//     if (n == 0) return;

//     // Print name
//     cout << name << endl;

//     // Recursive call
//     printName(name, n - 1);
// }

// void printLinear(int i, int n) {
//     // Base case
//     if (i > n) return;

//     // Print current number
//     cout << i << " ";

//     // Recursive call
//     printLinear(i + 1, n);
// }
// void printReverse(int n) {
//     // Base case
//     if (n < 1) return;

//     // Print current number
//     cout << n << " ";

//     // Recursive call
//     printReverse(n - 1);
// }

// void printLinear(int i, int n) {
//     if (i > n) return;

//     // Recursive call first
//     printLinear(i + 1, n);

//     // Backtracking step: print on the way back
//     cout << i << " ";
// }

// int sum(int n) {
//     if (n == 0) return 0; // Base case
//     return n + sum(n - 1); // Recursive step
// }
int factorial(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial(n - 1);    // Recursive step
}

int main() {
    // string name;
    // int times;

    // cout << "Enter name: ";
    // getline(cin, name);

    // cout << "Enter how many times to print: ";
    // cin >> times;

    // printName(n1, n2);
    
    // int n;

    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Numbers from 1 to " << n << " are:\n";
    // printLinear(1, n);
    //  int n;

    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Numbers from " << n << " to 1 are:\n";
    // printReverse(n);
    
    //     int n;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // cout << "Numbers from 1 to " << n << " using backtracking:\n";
    // printLinear(1, n);
    
//  int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Sum of first " << n << " natural numbers is: " << sum(n) << endl;

int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}

