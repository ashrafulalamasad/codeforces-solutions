#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; set<ll> s;
        for(ll i = 1; i <= n; i++){
            ll a; cin >> a;
            s.insert(a - i);
        }
        ll ans = 0, cur = 0, prev = -4000000000LL;
        for(ll x : s){
            if(x != prev + 1){
                ans = max(ans, cur);
                cur = 0;
            }
            cur++;
            prev = x;
        }
        ans = max(ans, cur);
        cout << ans << endl;
    }
    return 0;
}
