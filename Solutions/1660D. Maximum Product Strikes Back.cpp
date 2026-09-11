#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll be = 0, bx = n, by = 0;
        auto upd = [&](ll e, ll x, ll y){
            if(e >= be){
                be = e; bx = x; by = y;
            }
        };
        while(l < n){
            if(a[l] == 0){
                l++;
                continue;
            }
            ll r = l;
            while(r < n && a[r] != 0) r++;
            ll cnt2 = 0, neg = 0, f = -1, g = -1;
            for(ll i = l; i < r; i++){
                if(a[i] == 2 || a[i] == -2) cnt2++;
                if(a[i] < 0){
                    neg++;
                    if(f < 0) f = i;
                    g = i;
                }
            }
            if(neg % 2 == 0) upd(cnt2, l, n - r);
            else{
                ll c2 = 0;
                for(ll i = f + 1; i < r; i++){
                    if(a[i] == 2 || a[i] == -2) c2++;
                }
                upd(c2, f + 1, n - r);
                c2 = 0;
                for(ll i = l; i < g; i++){
                    if(a[i] == 2 || a[i] == -2) c2++;
                }
                upd(c2, l, n - g);
            }
            l = r + 1;
        }
        cout << bx << " " << by << endl;
    }
    return 0;
}
