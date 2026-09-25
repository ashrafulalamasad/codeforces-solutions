#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 2; cin >> n; vector<ll> b(n);
    for(ll i = 0; i < n; i++) cin >> b[i];
    if(n <= 2){
        cout << n << endl;
        return 0;
    }
    map<ll, ll> freq;
    for(ll i = 0; i < n; i++) freq[b[i]]++;
    for(auto p : freq) ans = max(ans, p.second);
    vector<ll> vals = b;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    ll m = (ll)vals.size();
    map<ll, ll> id; vector<ll> bid(n), best(m);
    for(ll i = 0; i < m; i++) id[vals[(size_t)i]] = i;
    for(ll i = 0; i < n; i++) bid[i] = id[b[i]];
    vector<vector<ll>> dp(n, vector<ll>(n, 2));
    for(ll j = 0; j < n; j++){
        for(ll i = 0; i < m; i++) best[i] = -1;
        for(ll i = 0; i < j; i++){
            if(b[i] != b[j]) best[(size_t)bid[i]] = max(best[(size_t)bid[i]], dp[(size_t)i][(size_t)j]);
        }
        for(ll k = j + 1; k < n; k++){
            if(b[j] != b[k] && best[(size_t)bid[k]] != -1){
                dp[(size_t)j][(size_t)k] = best[(size_t)bid[k]] + 1;
                ans = max(ans, dp[(size_t)j][(size_t)k]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
