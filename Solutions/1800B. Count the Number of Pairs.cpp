#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; string s; cin >> n >> k >> s;
        ll lower[26] = {}, upper[26] = {};
        for(ll i = 0; i < n; i++){
            if(s[i] >= 'a' && s[i] <= 'z') lower[s[i] - 'a']++;
            else upper[s[i] - 'A']++;
        }
        ll ans = 0;
        for(ll i = 0; i < 26; i++){
            ll pairs = min(lower[i], upper[i]);
            ans += pairs;
            ll rem = abs(lower[i] - upper[i]) / 2;
            ll use = min(rem, k);
            ans += use;
            k -= use;
        }
        cout << ans << endl;
    }
    return 0;
}
