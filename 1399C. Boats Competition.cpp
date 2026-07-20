#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> w(n);
        for(ll i = 0; i < n; i++) cin >> w[i];
        for(ll s = 2; s <= 2*n; s++) {
            map<ll,ll> freq;
            for(ll x : w) freq[x]++;
            ll teams = 0;
            for(auto& [x, cnt] : freq) {
                ll y = s - x;
                if(y < x) continue;
                if(y == x) teams += freq[x] / 2;
                else if(freq.count(y)) teams += min(freq[x], freq[y]);
            }
            ans = max(ans, teams);
        }
        cout << ans << endl;
    }
    return 0;
}
