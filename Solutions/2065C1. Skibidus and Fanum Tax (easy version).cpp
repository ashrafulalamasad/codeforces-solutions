#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll b, prev = LLONG_MIN; cin >> b;
        bool ok = true;
        for(ll i = 0; i < n; i++){
            ll c1 = a[i], c2 = b - a[i];
            ll chosen = LLONG_MAX;
            if(c1 >= prev) chosen = min(chosen, c1);
            if(c2 >= prev) chosen = min(chosen, c2);
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
