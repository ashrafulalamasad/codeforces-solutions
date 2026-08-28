#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, x; cin >> n >> m >> x;
        vector<bool> cur(n, false);
        cur[x - 1] = true;
        for(ll i = 0; i < m; i++){
            ll r; char c; cin >> r >> c;
            vector<bool> nxt(n, false);
            for(ll j = 0; j < n; j++){
                if(!cur[j]) continue;
                if(c == '0' || c == '?') nxt[(j + r) % n] = true;
                if(c == '1' || c == '?') nxt[(j - r + n) % n] = true;
            }
            cur = nxt;
        }
        vector<ll> ans;
        for(ll j = 0; j < n; j++) if(cur[j]) ans.push_back(j + 1);
        cout << ans.size() << endl;
        for(ll v : ans) cout << v << " ";
        cout << endl;
    }
    return 0;
}
