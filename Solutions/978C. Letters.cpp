#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> pref(n + 1, 0);
    for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];
    for(ll i = 0; i < m; i++){
        ll b; cin >> b;
        ll idx = lower_bound(pref.begin() + 1, pref.end(), b) - pref.begin();
        cout << idx << " " << b - pref[idx - 1] << endl;
    }
    return 0;
}
