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
    ll best = 1000000000, bi = 0;
    for(ll i = 0; i < n; i++){
        ll j = (i + 1) % n;
        ll d = abs(a[i] - a[j]);
        if(d < best){
            best = d;
            bi = i;
        }
    }
    cout << bi + 1 << " " << (bi + 1) % n + 1 << endl;
    return 0;
}
