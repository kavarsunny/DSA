#include<bits/stdc++.h>
using namespace std;
// pass by value 
//  void dosome (int num){
//      cout << num ;
//      num+= 5;
//       cout << num;
//       num += 5;
//       cout << num ;
//  }

// pass by reference
void doone(string &s){
    s[0] = 't';
    cout << s << endl;
    
}
 int main() {
// int num=1;

//  dosome(num);
//  cout << num;

// reference
 string s="raj";
 doone(s);
 cout << s << endl;
 
 int arr[4];
 for (int i=0;i<=3; i=i+1){
     cin >> arr[i];}
     for (int i=0;i<=3; i=i+1){
     cout << i;
 }
 

	return 0;
}

