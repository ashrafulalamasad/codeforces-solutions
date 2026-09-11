#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), last(n + 1), seen(n + 1, 0);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            last[a[i]] = i;
        }
        ll ans = 1, segment = 1, distinct = 0, missing = 0, minLast = n;
        for(ll i = 0; i < n; i++){
            ll value = a[i];
            if(seen[value] != segment){
                if(seen[value] == 0){
                    distinct++;
                }else{
                    missing--;
                }
                seen[value] = segment;
            }
            minLast = min(minLast, last[value]);
            if(missing == 0 && i < minLast){
                ans++;
                segment++;
                missing = distinct;
                minLast = n;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
