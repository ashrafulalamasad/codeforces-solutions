#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        ll x = 1, y = 1, p = 1;
        for(ll i = 1; i < a; i++) x *= 10;
        for(ll i = 1; i < b; i++) y *= 10;
        for(ll i = 1; i < c; i++) p *= 10;
        y += p;
        cout << x << " " << y << endl;
    }
    return 0;
}
