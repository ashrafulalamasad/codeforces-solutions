#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n), s(n), a(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) cin >> s[i];
        for(ll i = 0; i < n; i++){
            ll g = gcd(p[i], s[i]);
            a[i] = (p[i] / g) * s[i];
        }
        bool ok = true; ll cur = 0;
        for(ll i = 0; i < n; i++){
            cur = gcd(cur, a[i]);
            if(cur != p[i]){
                ok = false;
            }
        }
        cur = 0;
        for(ll i = n - 1; i >= 0; i--){
            cur = gcd(cur, a[i]);
            if(cur != s[i]){
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
