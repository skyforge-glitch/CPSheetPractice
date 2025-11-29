#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast;

    int a, b, c;
    cin >> a >> b >> c;

    int mn = min({a, b, c});
    int mx = max({a, b, c});

    if (mx - mn >= 10) {
        cout << "check again\n";
    } else {
        int median = a + b + c - mn - mx;
        cout << "final " << median << "\n";
    }
}