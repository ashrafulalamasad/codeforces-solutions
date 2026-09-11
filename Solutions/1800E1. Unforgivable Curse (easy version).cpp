#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll par[200005];

ll find(ll x){
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void unite(ll a, ll b){
    a = find(a);
    b = find(b);
    if(a != b) par[a] = b;
}

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        string s, t; cin >> s >> t;
        for(ll i = 0; i < n; i++) par[i] = i;
        for(ll i = 0; i < n; i++){
            if(i + k < n) unite(i, i + k);
            if(i + k + 1 < n) unite(i, i + k + 1);
        }
        map<ll, vector<ll>> cs, ct;
        for(ll i = 0; i < n; i++){
            ll r = find(i);
            cs[r].push_back(s[i]);
            ct[r].push_back(t[i]);
        }
        bool ok = true;
        for(auto& p : cs){
            sort(p.second.begin(), p.second.end());
            sort(ct[p.first].begin(), ct[p.first].end());
            if(p.second != ct[p.first]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
