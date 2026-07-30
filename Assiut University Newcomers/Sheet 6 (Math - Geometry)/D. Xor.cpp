#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll solve(ll a, ll b, ll q){
    ll r = q % 3;
    if(r == 1) return a;
    if(r == 2) return b;
    return a ^ b;
}

int main()
{
    fast;
    ll a, b, q; cin >> a >> b >> q;
    cout << solve(a, b, q) << endl;
    return 0;
}
