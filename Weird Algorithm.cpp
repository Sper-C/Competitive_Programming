#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    // Read number from input
    cin >> n;
    // Just an implementation
    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    cout << '\n';
    return 0;
}