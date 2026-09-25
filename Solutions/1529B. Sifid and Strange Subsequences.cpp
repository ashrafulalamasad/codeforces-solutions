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
        ll ans = 0, mn = 1000000010;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] <= 0) ans++;
        }
        sort(a.begin(), a.end());
        for(ll i = 0; i < n; i++){
            if(a[i] > 0) mn = min(mn, a[i]);
        }
        bool flag = mn < 1000000010;
        for(ll i = 1; i < n; i++){
            if(a[i] <= 0) flag &= (a[i] - a[i - 1] >= mn);
        }
        if(flag) cout << ans + 1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
