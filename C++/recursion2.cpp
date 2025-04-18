

#include <bits/stdc++.h>
using namespace std;
// void reverseArray(int arr[], int start, int end) {
//     if (start >= end) return;

//     // Swap elements
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     // Recursive call
//     reverseArray(arr, start + 1, end - 1);
// }

bool isPalindrome(string str, int start, int end) {
    if (start >= end) return true;  // base case

    if (str[start] != str[end]) return false;

    // Recursive call
    return isPalindrome(str, start + 1, end - 1);
}

int main(){
    
    //  int n;
    // cout << "Enter the size of array: ";
    // cin >> n;

    // int arr[n];
    // cout << "Enter the elements of array:\n";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // reverseArray(arr, 0, n - 1);

    // cout << "Reversed array: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
  string word;
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word, 0, word.length() - 1)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
    return 0;
}

