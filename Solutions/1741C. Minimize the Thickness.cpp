#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = n;
        for(ll first = 1; first <= n; first++){
            ll target = 0;
            for(ll i = 0; i < first; i++) target = target + a[i];
            ll cur = 0, curLen = 0, mx = first; bool ok = true;
            for(ll i = first; i < n; i++){
                cur = cur + a[i];
                curLen++;
                if(cur == target){
                    if(curLen > mx) mx = curLen;
                    cur = 0;
                    curLen = 0;
                }else if(cur > target){
                    ok = false;
                    break;
                }
            }
            if(ok && cur == 0 && mx < ans) ans = mx;
        }
        cout << ans << endl;
    }
    return 0;
}
