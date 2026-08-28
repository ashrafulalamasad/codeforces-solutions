#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        auto check = [&](ll skip) -> bool {
            ll prev = -1, last = -1;
            for(ll i = 0; i < n; i++){
                if(i == skip) continue;
                if(prev != -1){
                    ll g = __gcd(prev, a[i]);
                    if(g < last) return false;
                    last = g;
                }
                prev = a[i];
            }
            return true;
        };
        ll pos = -1;
        for(ll i = 0; i + 2 < n; i++){
            if(__gcd(a[i], a[i + 1]) > __gcd(a[i + 1], a[i + 2])){
                pos = i;
                break;
            }
        }
        bool ok;
        if(pos == -1){
            ok = check(n - 1);
        }else{
            ok = check(pos) || check(pos + 1) || check(pos + 2);
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
