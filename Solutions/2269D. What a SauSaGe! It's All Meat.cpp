#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    bool evenPopcount[16];
    for(ll i = 0; i < 16; i++){
        evenPopcount[i] = (__builtin_popcountll(i) % 2 == 0);
    }
    tc{
        ll n, q; cin >> n >> q;
        vector<ll> a(n); ll ans = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(evenPopcount[a[i]]) ans++;
        }
        cout << ans;
        for(ll i = 0; i < q; i++){
            ll p, x; cin >> p >> x;
            p--;
            if(evenPopcount[a[p]]) ans--;
            a[p] = x;
            if(evenPopcount[x]) ans++;
            cout << ' ' << ans;
        }
        cout << endl;
    }
    return 0;
}
