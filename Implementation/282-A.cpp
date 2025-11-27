#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main(){
    fast;

    int n; cin >> n;
    int x = 0;

    while (n--) {
        string a; cin >> a;
        if (a[1] == '+') x++;
        else x--;
    }

    cout << x;

    return 0;
}