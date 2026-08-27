#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m, state = 0;; string s; cin >> s >> m;
        string l, r; cin >> l >> r;
        vector<vector<ll>> pos(10); bool ans = false;
        for(ll i = 0; i < (ll)s.size(); i++){
            pos[s[i] - '0'].push_back(i);
        }
        for(ll i = 0; i < m && !ans; i++){
            ll lo = l[i] - '0', hi = r[i] - '0', best = 0;
            for(ll d = lo; d <= hi; d++){
                auto it = lower_bound(pos[d].begin(), pos[d].end(), state);
                if(it == pos[d].end()){
                    ans = true;
                    break;
                }
                best = max(best, *it + 1);
            }
            state = best;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
