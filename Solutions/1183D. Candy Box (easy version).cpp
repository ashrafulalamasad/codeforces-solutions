#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> freq, cnt(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        for(ll i = 1; i <= n; i++) if(cnt[i] > 0) freq.push_back(cnt[i]);
        sort(freq.rbegin(), freq.rend());
        ll ans = freq[0], prev = freq[0], m = freq.size();
        for(ll i = 1; i < m; i++){
            ll cur = freq[i];
            if(cur >= prev) cur = prev - 1;
            if(cur <= 0) break;
            ans = ans + cur;
            prev = cur;
        }
        cout << ans << endl;
    }
    return 0;
}
