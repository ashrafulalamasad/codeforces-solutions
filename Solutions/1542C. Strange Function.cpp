#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll MOD = 1000000007LL;
    const ll LIMIT = 10000000000000000LL;
    vector<ll> lcms; lcms.push_back(1);
    lcms.push_back(1); ll cur = 1;
    for(ll i = 2; ; i++){
        ll g = gcd(cur, i), x = cur / g;
        if(x > LIMIT / i) break;
        cur = x * i;
        lcms.push_back(cur);
    }
    tc{
        ll n, ans = 0; cin >> n;
        for(ll i = 0; i < (ll)lcms.size(); i++){
            if(lcms[i] > n) break;
            ll term = (n / lcms[i]) % MOD;
            ans += term;
            if(ans >= MOD){
                ans -= MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
