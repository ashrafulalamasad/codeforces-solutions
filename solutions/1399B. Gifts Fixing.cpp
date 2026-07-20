#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        ll mna = *min_element(a.begin(), a.end());
        ll mnb = *min_element(b.begin(), b.end());
        ll ans = 0;
        for(ll i = 0; i < n; i++)
            ans += max(a[i] - mna, b[i] - mnb);
        cout << ans << endl;
    }
    return 0;
}
