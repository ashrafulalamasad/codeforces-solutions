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
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        ll suffix = 0, ans = 0;
        for(ll i = n - 1; i >= 0; i--){
            suffix += a[i];
            if(i == 0) ans += suffix;
            else ans += max(0LL, suffix);
        }
        cout << ans << endl;
    }
    return 0;
}
