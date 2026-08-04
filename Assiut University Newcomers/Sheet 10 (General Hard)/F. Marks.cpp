#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<string> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> maxCol(m, 0);
    for(ll j = 0; j < m; j++){
        for(ll i = 0; i < n; i++){
            maxCol[j] = max(maxCol[j], (ll)(a[i][j] - '0'));
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(a[i][j] - '0' == maxCol[j]){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
