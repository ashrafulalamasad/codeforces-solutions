#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x;
        vector<ll> a(n), best(n + 1), ans(n + 1);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll len = 1; len <= n; len++){
            ll sum = 0;
            for(ll i = 0; i < len; i++) sum = sum + a[i];
            best[len] = sum;
            for(ll i = len; i < n; i++){
                sum = sum + a[i] - a[i - len];
                best[len] = max(best[len], sum);
            }
        }
        for(ll k = 0; k <= n; k++){
            for(ll len = 1; len <= n; len++) ans[k] = max(ans[k], best[len] + x * min(k, len));
            cout << ans[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
