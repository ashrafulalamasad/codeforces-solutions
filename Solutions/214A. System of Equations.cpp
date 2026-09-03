#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    ll ans = 0;
    for(ll a = 0; a * a <= n; a++){
        ll b = n - a * a;
        if(a + b * b == m) ans++;
    }
    cout << ans << endl;
    return 0;
}
