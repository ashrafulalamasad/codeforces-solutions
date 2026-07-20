#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> s(n);
        for(ll i = 0; i < n; i++) cin >> s[i];
        ll ans = 0;
        for(ll L = 0; L < 5; L++){
            char ch = 'a' + L;
            vector<ll> deltas;
            for(ll i = 0; i < n; i++){
                ll cnt = 0;
                for(char c: s[i]) if(c == ch) cnt++;
                ll len = (ll)s[i].size();
                deltas.push_back(2 * cnt - len);
            }
            sort(deltas.rbegin(), deltas.rend());
            ll sum = 0;
            ll best = 0;
            for(ll i = 0; i < n; i++){
                sum += deltas[i];
                if(sum > 0) best = i + 1;
            }
            ans = max(ans, best);
        }
        cout << ans << endl;
    }
    return 0;
}
