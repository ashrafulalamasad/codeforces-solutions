#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll mn = a[0], mx = a[0];
        for(ll i = 1; i < n; i++){
            if(a[i] < mn) mn = a[i];
            if(a[i] > mx) mx = a[i];
        }
        if(mx - mn > 2 * k) cout << -1 << endl;
        else cout << mn + k << endl;
    }
    return 0;
}
