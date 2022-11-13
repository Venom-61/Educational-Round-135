#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Best Permutation

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    iota(p.begin(), p.end(), 1);
    // n = 3
    // 1 2 3
    
    for(int i = n & 1; i < n - 2; i += 2)
        swap(p[i], p[i+1]);

    for(int &x : p)
        cout << x << " ";
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
