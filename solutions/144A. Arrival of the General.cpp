#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    ll mx = 0, mn = 0;
    for(ll i=0; i<n; i++){
        if(a[i]>a[mx]){
            mx = i;
        }
    }
    for(ll i=0; i<n; i++){
        if(a[i]<=a[mn]){
            mn = i;
        }
    }
    ll ans = mx + (n - 1 - mn);
    if(mx > mn){
        ans--;
    }
    cout << ans << endl;
    return 0;
}
