#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        if(y >= -1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
