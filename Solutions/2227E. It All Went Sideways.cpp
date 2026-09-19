#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 2, 0);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        const ll INF = (ll)4000000000000000000LL;
        vector<ll> suf(n + 3, INF); ll base = 0;
        for(ll i = n; i >= 1; i--) suf[i] = min(a[i], suf[i + 1]);
        for(ll i = 1; i <= n; i++) base += a[i] - suf[i];
        map<ll, vector<ll>> pos; ll gain = 0;
        for(ll j = 2; j <= n; j++) if(a[j - 1] >= suf[j]) pos[suf[j]].push_back(j);
        for(ll p = 1; p <= n; p++){
            if(a[p] == 0) continue;
            ll cnt = 0;
            auto it = pos.find(a[p]);
            if(it != pos.end()) cnt = upper_bound(it->second.begin(), it->second.end(), p) - it->second.begin();
            ll g = cnt - (a[p] > suf[p + 1] ? 1 : 0);
            gain = max(gain, g);
        }
        cout << base + gain << endl;
    }
    return 0;
}
