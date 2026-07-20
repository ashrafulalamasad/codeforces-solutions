#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> a(n); vector<ll> ones;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==1) ones.push_back(i);
    }
    if(ones.empty()){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 1;
    for(ll i=1; i<ones.size(); i++) ans *= ones[i]-ones[i-1];
    cout << ans << endl;
    return 0;
}
