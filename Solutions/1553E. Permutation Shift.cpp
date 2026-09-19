#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> p(n), cnt(n, 0);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++){
            ll k = (i - p[i] + 1 + n) % n;
            cnt[k] = cnt[k] + 1;
        }
        ll need = n - 2 * m; vector<ll> cand, ans;
        for(ll k = 0; k < n; k++) if(cnt[k] >= need) cand.push_back(k);
        for(ll idx = 0; idx < (ll)cand.size(); idx++){
            ll k = cand[idx];
            vector<ll> q = p, pos(n + 1);
            for(ll i = 0; i < n; i++) pos[q[i]] = i;
            ll swaps = 0; bool bad = false;
            for(ll i = 0; i < n; i++){
                ll want = (i - k + n) % n + 1;
                if(q[i] == want) continue;
                if(swaps >= m) bad = true;
                else{
                    ll j = pos[want];
                    pos[q[i]] = j; pos[want] = i;
                    ll tmp = q[i];
                    q[i] = q[j]; q[j] = tmp;
                    swaps = swaps + 1;
                }
                if(bad) break;
            }
            if(bad == false && swaps <= m) ans.push_back(k);
        }
        cout << (ll)ans.size();
        for(ll i = 0; i < (ll)ans.size(); i++) cout << " " << ans[i];
        cout << endl;
    }
    return 0;
}
