#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    ll total = 0;
    for(ll i = 0; i < n; i++){
        ll l, r; cin >> l >> r;
        total += r - l + 1;
    }
    cout << (k - total % k) % k << endl;
    return 0;
}
