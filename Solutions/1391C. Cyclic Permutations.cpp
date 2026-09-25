#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, mod = 1e9 + 7; cin >> n;
    ll fact = 1, p2 = 1;
    for(ll i = 2; i <= n; i++) fact = fact * i % mod;
    for(ll i = 1; i <= n - 1; i++) p2 = p2 * 2 % mod;
    cout << (fact - p2 + mod) % mod << endl;
    return 0;
}
