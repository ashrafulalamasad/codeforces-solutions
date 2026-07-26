#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> w(n);
        for(ll i = 0; i < n; i++) cin >> w[i];
        if(n % 2) {
            cout << "NO\n";
            continue;
        }
        ll mn = LLONG_MAX;
        ll mx = LLONG_MIN;
        for(ll i = 0; i < n; i += 2){
            mn = min(mn, w[i]);
        }
        for(ll i = 1; i < n; i += 2){
            mx = max(mx, w[i]);
        }
        if(mx + 1 < mn) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}
