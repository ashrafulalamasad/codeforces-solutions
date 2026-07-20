#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        for(ll i=0; i<n; i++){
            a[i]++;
            ll p = 1;
            for(ll j=0; j<n; j++) p *= a[j];
            ans = max(ans, p);
            a[i]--;
        }
        cout << ans << endl;
    }
    return 0;
}
