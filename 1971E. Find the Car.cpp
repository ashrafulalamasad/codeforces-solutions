#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    fast;
    tc{
        ll n,k,q; cin >> n >> k >> q;
        vector<ll> a(k+1), b(k+1);
        a[0] = 0; b[0] = 0;
        for(ll i = 1; i <= k; i++) cin >> a[i];
        for(ll i = 1; i <= k; i++) cin >> b[i];
        for(ll i = 0; i < q; i++){
            ll d; cin >> d;
            if(d == a[k]){
                cout << b[k] << " ";
                continue;
            }
            ll idx = upper_bound(a.begin(), a.end(), d) - a.begin();
            ll prev = idx - 1;
            ll next = idx;
            ll num = (d - a[prev]) * (b[next] - b[prev]);
            ll den = (a[next] - a[prev]);
            ll ans = b[prev] + num / den;
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
