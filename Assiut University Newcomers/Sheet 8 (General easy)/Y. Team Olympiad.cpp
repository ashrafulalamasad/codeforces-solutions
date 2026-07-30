#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> v[4];
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        v[x].push_back(i);
    }
    ll w = min({v[1].size(), v[2].size(), v[3].size()});
    cout << w << endl;
    for(ll i = 0; i < w; i++){
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
    }
    return 0;
}
