#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), c;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            if(c.empty() || c.back() != a[i]) c.push_back(a[i]);
        }
        if((ll)c.size() == 1) cout << 1 << endl;
        else{
            ll ans = 2;
            for(ll i = 1; i + 1 < (ll)c.size(); i++){
                if(c[i] > c[i - 1] && c[i] < c[i + 1]) continue;
                if(c[i] < c[i - 1] && c[i] > c[i + 1]) continue;
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
