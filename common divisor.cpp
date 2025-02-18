#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) {  
        cin >> a[i];
    }
    
    ll g = 0;
    for (int i = 0; i < n; i++) {
        g = __gcd(g, a[i]);
    }
    
    int ans = 0;
    for (ll i = 1; i * i <= g; ++i) {
        if (g % i == 0) {
            ++ans;
            if (i != g / i) {
                ++ans;
            }
        }
    }
    
    cout << ans << "\n";
    return 0;
}
