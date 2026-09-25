#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        ll st = max(1LL, n - 2 * k);
        ll ans = -1000000000000000000LL;
        for(ll i = st; i <= n; i++){
            for(ll j = i + 1; j <= n; j++){
                ans = max(ans, i * j - k * (a[i] | a[j]));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
