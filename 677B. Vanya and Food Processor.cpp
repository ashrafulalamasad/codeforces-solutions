#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, h, k; cin >> n >> h >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll cur = 0, ans = 0;
    ll i = 0;
    while(i < n){
        while(i < n && cur + a[i] <= h) cur += a[i++];
        if(i == n){
            ans += (cur + k - 1) / k;
            break;
        }
        ll to_remove = cur - (h - a[i]);
        ll secs = (to_remove + k - 1) / k;
        ans += secs;
        cur = max(0LL, cur - secs * k);
    }
    cout << ans << endl;
    return 0;
}
