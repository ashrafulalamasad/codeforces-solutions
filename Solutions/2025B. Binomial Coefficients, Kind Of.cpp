#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll t, mx = 0; cin >> t; vector<ll> n(t), k(t);
    for(ll i = 0; i < t; i++) cin >> n[i];
    for(ll i = 0; i < t; i++) cin >> k[i];
    for(ll i = 0; i < t; i++) mx = max(mx, k[i]);
    ll mod = 1000000007; vector<ll> pw(mx + 1); pw[0] = 1;
    for(ll i = 1; i <= mx; i++) pw[i] = pw[i - 1] * 2 % mod;
    for(ll i = 0; i < t; i++) cout << pw[k[i]] << endl;
    return 0;
}
