#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<pair<ll, ll>> pts(m);
        for(ll i = 0; i < m; i++) cin >> pts[i].first >> pts[i].second;
        vector<ll> idx(m);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](ll a, ll b){ return pts[a].second < pts[b].second; });
        vector<ll> chosen(idx.begin(), idx.begin() + 2 * n);
        sort(chosen.begin(), chosen.end(), [&](ll a, ll b){ return pts[a].first < pts[b].first; });
        ll total = 0;
        for(ll x : chosen) total += pts[x].second;
        cout << total << endl;
        for(ll i = 0; i < n; i++){
            cout << chosen[i] + 1 << " " << chosen[2 * n - 1 - i] + 1 << endl;
        }
    }
    return 0;
}
