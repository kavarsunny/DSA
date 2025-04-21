#include<bits/stdc++.h>
using namespace std;

   int main() {
    string s;
    getline(cin, s); // Read full line including spaces

    // Hash array to store frequency of 'a' to 'z'
    int hash[26] = {0};

    for (char ch : s) {
        if (isalpha(ch)) {
            ch = tolower(ch); // Convert to lowercase for uniformity
            hash[ch - 'a']++;
        }
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (hash[i] > 0) {
            cout << char('a' + i) << " : " << hash[i] << endl;
        }
    }

    return 0;
}

   
