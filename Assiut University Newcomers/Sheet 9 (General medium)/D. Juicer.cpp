#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, b, d; cin >> n >> b >> d;
    ll cur = 0, ans = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x > b) continue;
        cur += x;
        if(cur > d){ ans++; cur = 0; }
    }
    cout << ans << endl;
    return 0;
}
