#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ans = 0; cin >> n >> k;
        vector<ll> pref(n + 1, 0), cnt(k, 0);
        for(ll i = 1; i <= n; i++){
            ll a; cin >> a;
            pref[i] = (pref[i - 1] + a) % k;
        }
        for(ll j = 0; j <= n; j++){
            if(j - k - 1 >= 0) cnt[pref[j - k - 1]]++;
            if(j - k - 1 >= 0) ans = ans + cnt[pref[j]];
        }
        cout << ans << endl;
    }
    return 0;
}
