#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll j = 0; j < m; j++) cin >> b[j];
        sort(b.begin(), b.end());
        ll prev = -(ll)4e18; bool ok = true;
        for(ll i = 0; i < n; i++){
            ll chosen = LLONG_MAX;
            if(a[i] >= prev) chosen = min(chosen, a[i]);
            ll target = prev + a[i];
            auto it = lower_bound(b.begin(), b.end(), target);
            if(it != b.end()){
                ll val = *it - a[i];
                if(val >= prev) chosen = min(chosen, val);
            }
            if(chosen == LLONG_MAX){
                ok = false;
                break;
            }
            prev = chosen;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
