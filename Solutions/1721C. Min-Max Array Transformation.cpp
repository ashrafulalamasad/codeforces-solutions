#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n), mn(n), mx(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll last = n;
        for(ll i = n - 1; i >= 0; i--){
            ll pos = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            mn[i] = b[pos] - a[i];
            mx[i] = b[last - 1] - a[i];
            if(pos == i) last = i;
        }
        for(ll x : mn) cout << x << " ";
        cout << endl;
        for(ll x : mx) cout << x << " ";
        cout << endl;
    }
    return 0;
}
