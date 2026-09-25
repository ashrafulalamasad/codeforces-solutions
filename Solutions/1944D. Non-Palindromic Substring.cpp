#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD1 = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ll BASE1 = 313;
const ll BASE2 = 1013;

int main()
{
    fast;
    tc{
        ll n, q; string s; cin >> n >> q >> s;
        vector<ll> p1(n + 1, 1), p2(n + 1, 1);
        for(ll i = 1; i <= n; i++){
            p1[i] = p1[i - 1] * BASE1 % MOD1;
            p2[i] = p2[i - 1] * BASE2 % MOD2;
        }
        vector<ll> h1(n + 1, 0), h2(n + 1, 0);
        for(ll i = 0; i < n; i++){
            h1[i + 1] = (h1[i] * BASE1 + s[i]) % MOD1;
            h2[i + 1] = (h2[i] * BASE2 + s[i]) % MOD2;
        }
        vector<ll> rh1(n + 1, 0), rh2(n + 1, 0);
        for(ll i = n - 1; i >= 0; i--){
            rh1[n - i] = (rh1[n - i - 1] * BASE1 + s[i]) % MOD1;
            rh2[n - i] = (rh2[n - i - 1] * BASE2 + s[i]) % MOD2;
        }
        auto get_forward_hash = [&](ll l, ll r){
            ll hash1 = (h1[r + 1] - (h1[l] * p1[r - l + 1]) % MOD1 + MOD1) % MOD1;
            ll hash2 = (h2[r + 1] - (h2[l] * p2[r - l + 1]) % MOD2 + MOD2) % MOD2;
            return make_pair(hash1, hash2);
        };
        auto get_backward_hash = [&](ll l, ll r){
            ll rl = n - 1 - r, rr = n - 1 - l;
            ll hash1 = (rh1[rr + 1] - (rh1[rl] * p1[rr - rl + 1]) % MOD1 + MOD1) % MOD1;
            ll hash2 = (rh2[rr + 1] - (rh2[rl] * p2[rr - rl + 1]) % MOD2 + MOD2) % MOD2;
            return make_pair(hash1, hash2);
        };
        vector<ll> pref_adj(n, 0), pref_alt(n, 0);
        for(ll i = 1; i < n; i++){
            pref_adj[i] = pref_adj[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
        }
        for(ll i = 2; i < n; i++){
            pref_alt[i] = pref_alt[i - 1] + (s[i] == s[i - 2] ? 1 : 0);
        }
        while(q--){
            ll l, r; cin >> l >> r;
            l--; r--; ll len = r - l + 1;
            if(pref_adj[r] - pref_adj[l] == len - 1){
                cout << 0 << endl;
                continue;
            }
            bool is_alternating = (pref_alt[r] - pref_alt[l + 1] == len - 2);
            ll total_ans = 1LL * (len + 2) * (len - 1) / 2;
            bool is_pal = (get_forward_hash(l, r) == get_backward_hash(l, r));
            if(is_pal) total_ans -= len;
            if(is_alternating){
                ll max_odd = (len % 2 == 1) ? len - 2 : len - 1;
                if(max_odd >= 3){
                    ll count_odds = (max_odd - 3) / 2 + 1;
                    ll sum_odds = count_odds * (3 + max_odd) / 2;
                    total_ans -= sum_odds;
                }
            }
            cout << total_ans << endl;
        }
    }
    return 0;
}
