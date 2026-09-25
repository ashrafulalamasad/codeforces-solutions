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
        ll ans = 2 * n - 1;
        for(ll i = 0; i + 2 < n; i++){
            if(a[i] <= a[i + 1] && a[i + 1] <= a[i + 2]) continue;
            if(a[i] >= a[i + 1] && a[i + 1] >= a[i + 2]) continue;
            ans++;
        }
        for(ll i = 0; i + 3 < n; i++){
            if(a[i] <= a[i + 1] && a[i + 1] <= a[i + 2]) continue;
            if(a[i] >= a[i + 1] && a[i + 1] >= a[i + 2]) continue;
            if(a[i] <= a[i + 1] && a[i + 1] <= a[i + 3]) continue;
            if(a[i] >= a[i + 1] && a[i + 1] >= a[i + 3]) continue;
            if(a[i] <= a[i + 2] && a[i + 2] <= a[i + 3]) continue;
            if(a[i] >= a[i + 2] && a[i + 2] >= a[i + 3]) continue;
            if(a[i + 1] <= a[i + 2] && a[i + 2] <= a[i + 3]) continue;
            if(a[i + 1] >= a[i + 2] && a[i + 2] >= a[i + 3]) continue;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
