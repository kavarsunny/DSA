#include<bits/stdc++.h>
using namespace std;
int main() {
	/*
	take int and  print day name

	*/

	int num;
	cin >> num;
	switch(num) {
	case 1:
		cout << "monday";
		break;
	case 2:
		cout << "tuesday";
		break;

	case 3:
		cout << "wednesday";
		break;
	case 4:
		cout << "thursday";
		break;
	case 5:
		cout << "friday";
break;
	default:
		cout << "noday";

	}
	return 0;
}