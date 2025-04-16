#include<bits/stdc++.h>
using namespace std;
// set of code
// increases readiblity
// used multiple time
//void, return ,paramaterized, non paramaterized
// void  printname(string name){
//     cout << "hi" << name;
// }

// int sum(int n1, int n2){
//     int n3= n1+n2;
//     return n3;
    
// }
 
int maxx(int a, int b){
    if (a >=b)return a;
    else return b;
}
 int main() {
//     string name;
//     cin >> name;
// printname (name);

// // take 2 num and print sum of them
// int n1,n2;
//  cin >> n1 >> n2;
//  int res = sum(n1,n2);
//  cout << res;
int a, b;
cin >> a >> b;
int m =maxx(a,b);
cout << m;
 
	return 0;
}

