#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), [](ll x, ll y){
        ll c3x = 0, c3y = 0, tx = x, ty = y;
        while(tx % 3 == 0) tx /= 3, c3x++;
        while(ty % 3 == 0) ty /= 3, c3y++;
        if(c3x != c3y) return c3x > c3y;
        return x < y;
    });
    for(ll i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    return 0;
}
