#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    ll j = 0;
    for(ll i = 0; i < n; i++){
        if(j < m && a[i] == b[j]) j++;
    }
    if(j == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
