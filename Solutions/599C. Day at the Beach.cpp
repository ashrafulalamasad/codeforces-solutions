#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> h(n);
    for(ll i = 0; i < n; i++) cin >> h[i];
    vector<ll> suf(n);
    suf[n - 1] = h[n - 1];
    for(ll i = n - 2; i >= 0; i--){
        suf[i] = min(suf[i + 1], h[i]);
    }
    ll mx = h[0];
    ll blocks = 1;
    for(ll i = 0; i < n - 1; i++){
        mx = max(mx, h[i]);
        if(mx <= suf[i + 1]) blocks++;
    }
    cout << blocks << endl;
    return 0;
}
