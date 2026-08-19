#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<vector<ll>> children(n + 1);
        for(ll i = 2; i <= n; i++){
            ll p; cin >> p;
            children[p].push_back(i);
        }
        ll m; cin >> m;
        vector<ll> marked(n + 1, 0);
        for(ll i = 0; i < m; i++){
            ll x; cin >> x;
            marked[x] = 1;
        }
        vector<ll> rem(n + 1, 0);
        vector<ll> ans;
        for(ll v = n; v >= 1; v--){
            if(marked[v] == 1){
                rem[v] = 1;
                for(ll c : children[v]){
                    if(rem[c] == 1){
                        ans.push_back(c);
                    }
                }
            }else{
                ll kept = 0;
                for(ll c : children[v]){
                    if(rem[c] == 1){
                        if(kept == 0){
                            kept = 1;
                            rem[v] = 1;
                        }else{
                            ans.push_back(c);
                        }
                    }
                }
            }
        }
        ll k = (ll)ans.size();
        cout << k;
        for(ll i = 0; i < k; i++){
            cout << ' ' << ans[i];
        }
        cout << endl;
    }
    return 0;
}
