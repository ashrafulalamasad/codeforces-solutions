#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, m; cin >> n >> k >> m; vector<string> words(n+1); vector<ll> cost(n+1);
    for(ll i = 1; i <= n; i++) cin >> words[i];
    for(ll i = 1; i <= n; i++) cin >> cost[i];
    vector<ll> group_min(n + 1, LLONG_MAX);
    for(ll g = 0; g < k; g++){
        ll x; cin >> x;
        ll mn = LLONG_MAX;
        vector<ll> idx(x);
        for(ll j = 0; j < x; j++){
            cin >> idx[j];
            mn = min(mn, cost[idx[j]]);
        }
        for(ll j = 0; j < x; j++) group_min[idx[j]] = mn;
    }
    map<string, ll> word_to_idx;
    for(ll i = 1; i <= n; i++) word_to_idx[words[i]] = i;
    ll ans = 0;
    for(ll i = 0; i < m; i++){
        string w; cin >> w;
        ll idx = word_to_idx[w];
        ans += group_min[idx];
    }
    cout << ans << endl;
    return 0;
}
