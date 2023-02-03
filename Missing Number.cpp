#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Read input
    int n;
    cin >> n;
    string bits (n+1, '0');
    int element;
    for (int i = 1; i < n; i++) {
        cin >> element;
        bits[element] = '1';
    }
    for (int i = 1; i <= n; i++) {
        if (bits[i] == '0') cout << i << '\n';
    }
    return 0;
}