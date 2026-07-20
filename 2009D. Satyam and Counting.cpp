#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n;
        vector<bool> has0(n + 2, false), has1(n + 2, false);
        ll cnt0 = 0, cnt1 = 0;
        for(ll i = 0; i < n; ++i){
            ll x, y; cin >> x >> y;
            if(y == 0){ has0[x] = true; ++cnt0; }
            else{ has1[x] = true; ++cnt1; }
        }
        ll ans = 0;
        for(ll x = 0; x <= n; ++x){
            if(has0[x] && has1[x]){
                ans += cnt0 - 1;
                ans += cnt1 - 1;
            }
        }
        for(ll x = 1; x < n; ++x){
            if(has0[x] && has1[x - 1] && has1[x + 1]) ++ans;
            if(has1[x] && has0[x - 1] && has0[x + 1]) ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}
