#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string a, b; cin >> n >> a >> b;
    vector<ll> par(26); vector<pair<char, char>> spells;
    for(ll i = 0; i < 26; i++) par[i] = i;
    function<ll(ll)> find = [&](ll x){
        return par[x] == x ? x : par[x] = find(par[x]);
    };
    for(ll i = 0; i < n; i++){
        if(a[i] != b[i]){
            ll ra = find(a[i] - 'a'), rb = find(b[i] - 'a');
            if(ra != rb){
                par[ra] = rb;
                spells.push_back({a[i], b[i]});
            }
        }
    }
    cout << spells.size() << endl;
    for(auto &p : spells) cout << p.first << " " << p.second << endl;
    return 0;
}
