#include<bits/stdc++.h>
using namespace std;

//  void print1(){
//  for ( int i=0;i<4;i++){
//      for (int j=0;j<4;j++){
//          cout << "*";
//      }
//      cout << endl;
//  }
// }

// void print2(int n){
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// void print3(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << j << "";
//         }
//         cout<< endl;
//     }
// }

// void print4(){
//     for (int i=1;i<=5;i++){
//         for (int j=1;j<=i;j++){
//             cout << i << "";
            
//         }
//         cout << endl;
//     }
// }
//  void print5(int n){
//      for (int i=0;i<=n;i++){
//          for (int j=0;j<n-i+1;j++){
//              cout << "*";
             
//          }
//          cout << endl;
//      }
// }
// void print6(int n){
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i+1;j++){
//             cout << j << "";
//         }
//         cout << endl;
//     }
    
// }
void print7(int n){
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<n-i-1;j++){
            cout <<" ";
        }
        //star
        for (int j=0;j<2*i+1;j++){
            cout << "*";
            
        }
        //space
         for (int j=0;j<n-1;j++){
             cout << " ";
         }
        cout << endl;
    
}}
void print8(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// void print9(){
// combine 7 and 8
// }

void print10(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i;
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
// outer loop , inner loop- connection,
int n;
cin >> n;

// print1();
// print2(n);
// print3();
// print7(n);
print10(n);
// print6(n);
	return 0;
}