#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        vector<ll> va(2*n+1, 0), vb(2*n+1, 0);
        ll cnt = 1;
        for(ll i = 1; i < n; i++){
            if(a[i] == a[i-1]) cnt++;
            else{
                va[a[i-1]] = max(va[a[i-1]], cnt);
                cnt = 1;
            }
        }
        va[a[n-1]] = max(va[a[n-1]], cnt);
        cnt = 1;
        for(ll i = 1; i < n; i++){
            if(b[i] == b[i-1]) cnt++;
            else{
                vb[b[i-1]] = max(vb[b[i-1]], cnt);
                cnt = 1;
            }
        }
        vb[b[n-1]] = max(vb[b[n-1]], cnt);
        ll ans = 0;
        for(ll i = 1; i <= 2*n; i++){
            ans = max(ans, va[i] + vb[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
