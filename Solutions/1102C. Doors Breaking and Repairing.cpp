#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x, y; cin >> n >> x >> y;
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        ll cur; cin >> cur;
        if(cur <= x) cnt++;
    }
    if(x > y) cout << n << endl;
    else cout << (cnt + 1) / 2 << endl;
    return 0;
}
