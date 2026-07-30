#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n;
    for(ll i = 0; i < n; i++){
        ll p, q; cin >> p >> q;
        if(q - p >= 2) ans++;
    }
    cout << ans << endl;
    return 0;
}
