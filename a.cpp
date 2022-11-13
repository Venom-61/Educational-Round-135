#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Colored Balls: Revisited

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) 
        cin >> a[i];

    int x = max_element(a.begin(), a.end()) - a.begin();

    cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
