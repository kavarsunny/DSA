#include<bits/stdc++.h>
using namespace std;



// int main() {
//     map<string, int> mp;
//     mp["apple"] = 2;
//     mp["banana"] = 4;
//     mp["orange"] = 1;

//     for (auto it : mp) {
//         cout << it.first << " -> " << it.second << endl;
//     }

//     return 0;
// }
int main() {
    unordered_map<string, int> ump;
    ump["apple"] = 2;
    ump["banana"] = 4;
    ump["orange"] = 1;

    for (auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}

   
