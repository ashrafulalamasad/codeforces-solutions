#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        set<ll> roots; vector<pair<ll, ll>> edges;
        for(ll i = 0; i < n; i++){
            ll value = p[i], smallest = value;
            while(!roots.empty() && *roots.begin() < value){
                ll root = *roots.begin();
                roots.erase(roots.begin());
                edges.push_back({root, value});
                smallest = min(smallest, root);
            }
            roots.insert(smallest);
        }
        if(roots.size() != 1){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
            for(auto [u, v] : edges){
                cout << u << " " << v << endl;
            }
        }
    }
    return 0;
}
