#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s, t; cin >> n >> s >> t;
        auto getRange = [&](ll i){
            if(s[i] == '1') return pair<ll, ll>{i, i};
            ll l = -1, r = -1;
            if(i > 0 && t[i - 1] == '1') l = i - 1;
            else if(i > 1 && t[i - 1] == '0' && s[i - 2] == '0') l = i - 2;
            if(i + 1 < n && t[i + 1] == '1') r = i + 1;
            else if(i + 2 < n && t[i + 1] == '0' && s[i + 2] == '0') r = i + 2;
            if(l == -1 || r == -1) return pair<ll, ll>{-1, -1};
            return pair<ll, ll>{l, r};
        };
        vector<ll> pref(n + 1);
        for(ll i = 0; i < n; i++) pref[i + 1] = pref[i] + (getRange(i).first != -1);
        ll q; cin >> q;
        while(q--){
            ll l, r; cin >> l >> r; l--; r--;
            ll ans = 0;
            if(r - l <= 5){
                for(ll i = l; i <= r; i++){
                    auto [left, right] = getRange(i);
                    if(left >= l && right <= r) ans++;
                }
            }else{
                ans = pref[r + 1] - pref[l];
                for(ll i : {l, l + 1, r - 1, r}){
                    auto [left, right] = getRange(i);
                    if(left != -1 && (left < l || right > r)) ans--;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
