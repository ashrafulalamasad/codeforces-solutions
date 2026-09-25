#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    vector<ll> pos(55, -1);
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        if(pos[a] == -1) pos[a] = i + 1;
    }
    for(ll i = 0; i < q; i++){
        ll t; cin >> t;
        ll ans = pos[t];
        cout << ans << " ";
        for(ll c = 1; c <= 50; c++){
            if(pos[c] != -1 && pos[c] < ans) pos[c]++;
        }
        pos[t] = 1;
    }
    cout << endl;
    return 0;
}
