#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    ll mx = -1, mxPos = -1, mn = 101, mnPos = -1;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > mx){
            mx = a[i];
            mxPos = i;
        }
        if(a[i] <= mn){
            mn = a[i];
            mnPos = i;
        }
    }
    ll ans = mxPos + (n - 1 - mnPos);
    if(mxPos > mnPos) ans--;
    cout << ans << endl;
    return 0;
}
