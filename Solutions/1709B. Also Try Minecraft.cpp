#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> a(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    vector<ll> preR(n + 1, 0), preL(n + 1, 0);
    for(ll i = 2; i <= n; i++){
        preR[i] = preR[i - 1] + max(0LL, a[i - 1] - a[i]);
        preL[i] = preL[i - 1] + max(0LL, a[i] - a[i - 1]);
    }
    for(ll i = 0; i < m; i++){
        ll s, t; cin >> s >> t;
        if(s < t) cout << preR[t] - preR[s] << endl;
        else cout << preL[s] - preL[t] << endl;
    }
    return 0;
}
