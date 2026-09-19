#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll ord[3][3] = {{2, 2, 3}, {2, 3, 2}, {3, 2, 2}};
    tc{
        ll n, h; cin >> n >> h; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end()); ll ans = 0;
        for(ll o = 0; o < 3; o++){
            ll cur = h, idx = 0, s = 0;
            while(true){
                while(idx < n && a[idx] < cur){
                    cur += a[idx] / 2; idx++;
                }
                if(idx == n || s == 3) break;
                cur *= ord[o][s]; s++;
            }
            ans = max(ans, idx);
        }
        cout << ans << endl;
    }
    return 0;
}
