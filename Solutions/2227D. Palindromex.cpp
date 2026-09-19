#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll m = 2 * n; vector<ll> a(m);
        for(ll i = 0; i < m; i++) cin >> a[i];
        ll x = -1, y = -1, best = 1;
        for(ll i = 0; i < m; i++) if(a[i] == 0){
            if(x == -1) x = i;
            else y = i;
        }
        for(ll c = 0; c < 3; c++){
            ll l, r;
            if(c == 0){
                l = x;
                r = x;
            }else if(c == 1){
                l = y;
                r = y;
            }else{
                if((x + y) % 2 == 1){
                    l = (x + y - 1) / 2;
                    r = (x + y + 1) / 2;
                }else{
                    l = (x + y) / 2;
                    r = (x + y) / 2;
                }
            }
            vector<ll> present(n + 1, 0);
            while(l >= 0 && r < m && a[l] == a[r]){
                if(a[l] <= n) present[a[l]] = 1;
                l--;
                r++;
            }
            ll mex = 0;
            while(mex <= n && present[mex]) mex++;
            best = max(best, mex);
        }
        cout << best << endl;
    }
    return 0;
}
