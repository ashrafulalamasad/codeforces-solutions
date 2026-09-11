#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n + 1);
        ll root = 1;
        for(ll i = 1; i <= n; i++){
            cin >> p[i];
            if(p[i] == i){
                root = i;
            }
        }
        vector<ll> has(n + 1, 0);
        for(ll i = 1; i <= n; i++){
            if(i != root){
                has[p[i]] = 1;
            }
        }
        vector<ll> leaves;
        for(ll i = 1; i <= n; i++){
            if(has[i] == 0){
                leaves.push_back(i);
            }
        }
        vector<ll> vis(n + 1, 0);
        vector<vector<ll>> ans;
        for(ll i = 0; i < leaves.size(); i++){
            vector<ll> cur;
            ll v = leaves[i];
            while(vis[v] == 0){
                cur.push_back(v);
                vis[v] = 1;
                if(v == root){
                    break;
                }
                v = p[v];
            }
            reverse(cur.begin(), cur.end());
            ans.push_back(cur);
        }
        cout << ans.size() << endl;
        for(ll i = 0; i < ans.size(); i++){
            cout << ans[i].size() << endl;
            for(ll j = 0; j < ans[i].size(); j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
