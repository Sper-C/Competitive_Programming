#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Read string
    string s;
    cin >> s;
    int max_length = 1;
    int temp_length = 1;
    char temp = s[0]; //store the char in repetitions
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == temp) {
            temp_length += 1;
        }
        else {
            temp_length = 1;
            temp = s[i];
        }
        if (max_length < temp_length) max_length = temp_length;
    }
    cout << max_length;
    return 0;
}