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
    sort(a.begin(), a.end()); ll ans = 0;
    for(ll i = 0; i < m && i < n; i++){
        if(a[i] < 0){
            ans = ans - a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
