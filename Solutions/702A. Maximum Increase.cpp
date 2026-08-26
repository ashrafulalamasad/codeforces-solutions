#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    ll ans = 1, cur = 1;
    for(ll i = 2; i <= n; i++){
        if(a[i] > a[i-1]) cur++;
        else cur = 1;
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
