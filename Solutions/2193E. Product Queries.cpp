#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> fac;
        vector<bool> present(n + 1, false);
        for(ll i = 0; i < n; i++){
            ll v; cin >> v;
            present[v] = true;
        }
        for(ll v = 2; v <= n; v++){
            if(present[v]) fac.push_back(v);
        }
        const ll INF = LLONG_MAX;
        vector<ll> dp(n + 1, INF);
        for(ll v = 1; v <= n; v++){
            if(present[v]) dp[v] = 1;
        }
        for(ll i = 1; i <= n; i++){
            if(dp[i] == INF) continue;
            for(ll v : fac){
                if(i * v > n) break;
                if(dp[i] + 1 < dp[i * v]) dp[i * v] = dp[i] + 1;
            }
        }
        for(ll i = 1; i <= n; i++){
            if(i > 1) cout << " ";
            cout << (dp[i] == INF ? -1 : dp[i]);
        }
        cout << endl;
    }
    return 0;
}
