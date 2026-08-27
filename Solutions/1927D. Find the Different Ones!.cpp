#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 2);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> nxt(n + 2, n + 1);
        for(ll i = n - 1; i >= 1; i--){
            if(a[i + 1] != a[i]) nxt[i] = i + 1;
            else nxt[i] = nxt[i + 1];
        }
        ll q; cin >> q;
        while(q--){
            ll l, r; cin >> l >> r;
            if(nxt[l] <= r) cout << l << " " << nxt[l] << endl;
            else cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
