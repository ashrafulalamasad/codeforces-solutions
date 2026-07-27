#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q; vector<ll> prefix(n+1, 0);
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        prefix[i] = prefix[i-1] + x;
    }
    while(q--){
        ll l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
    return 0;
}
