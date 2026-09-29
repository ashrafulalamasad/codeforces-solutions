#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> freq(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            freq[x]++;
        }
        vector<ll> pref(n + 1, 0);
        for(ll i = 1; i <= n; i++) pref[i] = pref[i - 1] + freq[i];
        ll ans = 1;
        for(ll g = 1; g <= n; g++){
            ll lim = min(n, 4 * g - 1);
            ll good = n - pref[lim] + freq[g];
            if(2 * g <= n) good = good + freq[2 * g];
            if(3 * g <= n) good = good + freq[3 * g];
            if(good >= n - k) ans = g;
        }
        cout << ans << endl;
    }
    return 0;
}
