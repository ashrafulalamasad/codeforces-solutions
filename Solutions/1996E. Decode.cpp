#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1e9 + 7;

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size(), cnt = 0, ans = 0;
        map<ll, vector<ll>> groups; groups[0].push_back(0);
        for(ll i = 0; i < n; i++){
            if(s[i] == '1') cnt++;
            ll d = 2 * cnt - (i + 1);
            groups[d].push_back(i + 1);
        }
        for(auto& [d, v] : groups){
            ll k = v.size();
            vector<ll> suffix(k + 1, 0);
            for(ll i = k - 1; i >= 0; i--){
                suffix[i] = (suffix[i + 1] + n - v[i] + 1) % MOD;
            }
            for(ll i = 0; i + 1 < k; i++){
                ans = (ans + (v[i] + 1) % MOD * suffix[i + 1]) % MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
