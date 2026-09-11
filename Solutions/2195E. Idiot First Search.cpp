#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1000000007;

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> l(n + 1), r(n + 1);
        vector<ll> parent(n + 1, 0), f(n + 1, 0), tau(n + 1, 0);
        for(ll i = 1; i <= n; i++) cin >> l[i] >> r[i];
        vector<ll> order; order.push_back(1);
        for(ll i = 0; i < (ll)order.size(); i++){
            ll v = order[i];
            if(l[v] != 0 || r[v] != 0){
                parent[l[v]] = v;
                parent[r[v]] = v;
                order.push_back(l[v]);
                order.push_back(r[v]);
            }
        }
        for(ll i = (ll)order.size() - 1; i >= 0; i--){
            ll v = order[i];
            if(l[v] == 0 && r[v] == 0){
                f[v] = 1;
            }else{
                f[v] = (f[l[v]] + f[r[v]] + 3) % MOD;
            }
        }
        tau[1] = f[1];
        for(ll i = 1; i < (ll)order.size(); i++){
            ll v = order[i];
            tau[v] = (f[v] + tau[parent[v]]) % MOD;
        }
        for(ll i = 1; i <= n; i++){
            if(i > 1){
                cout << " ";
            }
            cout << tau[i];
        }
        cout << endl;
    }
    return 0;
}
