#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        map<ll, ll> pre;
        ll ans = 0;
        for(ll j = 0; j < n; j++){
            ans += pre[a[j]] * (n - j);
            pre[a[j]] += j + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
