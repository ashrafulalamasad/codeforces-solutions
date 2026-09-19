#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, cnt = 0, ans = 0; cin >> n;
        vector<ll> d(n), p(n + 1), sz, comp(n + 1, -1);
        for(ll i = 1; i <= n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) cin >> d[i];
        for(ll i = 1; i <= n; i++){
            if(comp[i] != -1) continue;
            ll cur = i, len = 0;
            while(comp[cur] == -1){
                comp[cur] = cnt;
                cur = p[cur];
                len = len + 1;
            }
            sz.push_back(len);
            cnt = cnt + 1;
        }
        vector<ll> seen(cnt, 0);
        for(ll i = 0; i < n; i++){
            ll c = comp[d[i]];
            if(seen[c] == 0){
                seen[c] = 1;
                ans = ans + sz[c];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
