#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> mask(n), id(n, 0);
        for(ll i = 0; i < n; i++){
            string s; cin >> s; ll m = 0;
            if(s[0] == 'B' || s[1] == 'B') m = m + 1;
            if(s[0] == 'G' || s[1] == 'G') m = m + 2;
            if(s[0] == 'R' || s[1] == 'R') m = m + 4;
            if(s[0] == 'Y' || s[1] == 'Y') m = m + 8;
            mask[i] = m;
        }
        for(ll i = 0; i < n; i++){
            if(mask[i] == 3) id[i] = 0;
            else if(mask[i] == 5) id[i] = 1;
            else if(mask[i] == 9) id[i] = 2;
            else if(mask[i] == 6) id[i] = 3;
            else if(mask[i] == 10) id[i] = 4;
            else id[i] = 5;
        }
        vector<vector<ll>> pos(6);
        for(ll i = 0; i < n; i++) pos[id[i]].push_back(i);
        for(ll i = 0; i < q; i++){
            ll x, y; cin >> x >> y; x--; y--;
            if(x == y) cout << 0 << endl;
            else if((mask[x] & mask[y]) != 0) cout << abs(x - y) << endl;
            else{
                ll l = min(x, y), r = max(x, y), dist = r - l;
                bool found = false; ll bestL = -1, bestR = n + 5;
                for(ll c = 0; c < 6; c++){
                    if(c == id[l] || c == id[r]) continue;
                    ll sz = pos[c].size();
                    ll lo = lower_bound(pos[c].begin(), pos[c].end(), l) - pos[c].begin();
                    if(lo < sz && pos[c][lo] <= r) found = true;
                    else{
                        if(lo > 0 && pos[c][lo - 1] < l && pos[c][lo - 1] > bestL) bestL = pos[c][lo - 1];
                        if(lo < sz && pos[c][lo] > r && pos[c][lo] < bestR) bestR = pos[c][lo];
                    }
                }
                if(found) cout << dist << endl;
                else{
                    ll add = n + 5;
                    if(bestL != -1 && l - bestL < add) add = l - bestL;
                    if(bestR != n + 5 && bestR - r < add) add = bestR - r;
                    if(add == n + 5) cout << -1 << endl;
                    else cout << dist + 2 * add << endl;
                }
            }
        }
    }
    return 0;
}
