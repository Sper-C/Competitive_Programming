#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Read input
    int n;
    cin >> n;
    int pre, cur;
    long long steps = 0;
    // Read array of number
    for (int i = 1; i <= n; i++) {
        cin >> cur;
        if (i != 1) {
            if (cur < pre) {
                steps += (long long)pre-cur;
                cur = pre;
            }
        }
        pre = cur;
        //cout << "i: " << i << " pre: " << pre << " cur: " << cur << endl;
    }
    cout << steps;
    return 0;
}