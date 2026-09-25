#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; map<ll, ll> cnt;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        cnt[x]++;
    }
    ll mx = 0;
    for(auto &p : cnt) mx = max(mx, p.second);
    cout << mx << endl;
    return 0;
}
