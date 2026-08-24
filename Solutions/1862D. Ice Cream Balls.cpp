#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll l = 0, r = 2000000000LL;
        while(l < r){
            ll mid = (l + r + 1) / 2;
            if(mid * (mid - 1) / 2 <= n){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        ll k = l;
        ll used = k * (k - 1) / 2;
        ll ans = k + (n - used);
        cout << ans << endl;
    }
    return 0;
}
