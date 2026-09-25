#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll solve(ll bit, vector<ll> v){
    if(v.empty()) return 0;
    if(bit < 0) return 0;
    vector<ll> on, off;
    for(ll x : v){
        if(x & (1LL << bit)) on.push_back(x);
        else off.push_back(x);
    }
    if(off.empty()) return solve(bit - 1, on);
    if(on.empty()) return solve(bit - 1, off);
    return min(solve(bit - 1, on) | (1LL << bit), solve(bit - 1, off) | (1LL << bit));
}

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    cout << solve(29, a) << endl;
    return 0;
}
