#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll minA = LLONG_MAX, maxA = LLONG_MIN;
    ll minB = LLONG_MAX, maxB = LLONG_MIN;
    for(ll i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        ll a = x + y, b = x - y;
        minA = min(minA, a);
        maxA = max(maxA, a);
        minB = min(minB, b);
        maxB = max(maxB, b);
    }
    cout << (maxA - minA) + (maxB - minB) + 4 << endl;
    return 0;
}
