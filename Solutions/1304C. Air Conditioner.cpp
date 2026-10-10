#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> t(n), lo(n), hi(n);
        for(ll i = 0; i < n; i++) cin >> t[i] >> lo[i] >> hi[i];
        ll prev = 0, mn = m, mx = m; bool flag = true;
        for(ll i = 0; i < n; i++){
            mx += t[i] - prev;
            mn -= t[i] - prev;
            if(mx < lo[i] || mn > hi[i]){
                flag = false;
                break;
            }
            mx = min(mx, hi[i]);
            mn = max(mn, lo[i]);
            prev = t[i];
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
