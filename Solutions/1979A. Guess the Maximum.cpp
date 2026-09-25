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
        ll ans = max(a[0], a[1]);
        for(ll i = 1; i + 1 < n; i++){
            ll cand = max(a[i], a[i + 1]);
            if(cand < ans) ans = cand;
        }
        cout << ans - 1 << endl;
    }
    return 0;
}
