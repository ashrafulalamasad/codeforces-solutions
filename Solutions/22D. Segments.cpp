#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<pair<ll, ll>> a(n);
    for(auto& [l, r] : a){
        cin >> l >> r;
        if(l > r) swap(l, r);
    }
    sort(a.begin(), a.end(), [](auto x, auto y){
        return x.second < y.second;
    });
    vector<ll> ans;
    ll last = LLONG_MIN;
    for(auto [l, r] : a){
        if(l > last){
            ans.push_back(r);
            last = r;
        }
    }
    cout << ans.size() << endl;
    for(ll x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
