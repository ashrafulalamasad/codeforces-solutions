#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        unordered_map<ll, ll> sum;
        for(ll i = 0; i < k; i++){
            ll b, c; cin >> b >> c;
            sum[b] += c;
        }
        vector<ll> vals;
        for(auto &p : sum) vals.push_back(p.second);
        sort(vals.rbegin(), vals.rend());
        ll ans = 0;
        for(ll i = 0; i < min(n, (ll)vals.size()); i++) ans += vals[i];
        cout << ans << endl;
    }
    return 0;
}
