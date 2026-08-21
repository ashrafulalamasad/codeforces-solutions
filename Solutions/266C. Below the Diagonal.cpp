#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<pair<ll, ll>> ones;
    ones.reserve(n - 1);
    for(ll i = 0; i < n - 1; i++){
        ll x, y; cin >> x >> y;
        ones.push_back({x, y});
    }
    vector<ll> rowUsed(n + 1, 0), colUsed(n + 1, 0);
    vector<ll> rowOrder, colOrder;
    rowOrder.reserve(n); colOrder.reserve(n);
    for(ll step = 0; step < n; step++){
        vector<ll> rowDeg(n + 1, 0), colDeg(n + 1, 0);
        for(ll i = 0; i < n - 1; i++){
            ll x = ones[i].first;
            ll y = ones[i].second;
            if(!rowUsed[x] && !colUsed[y]){
                rowDeg[x]++;
                colDeg[y]++;
            }
        }
        ll r = 0;
        for(ll i = 1; i <= n; i++){
            if(!rowUsed[i] && rowDeg[i] == 0){
                r = i;
                break;
            }
        }
        ll c = 0;
        for(ll i = 1; i <= n; i++){
            if(!colUsed[i] && colDeg[i] > 0){
                c = i;
                break;
            }
        }
        if(c == 0){
            for(ll i = 1; i <= n; i++){
                if(!colUsed[i]){
                    c = i;
                    break;
                }
            }
        }
        rowUsed[r] = 1;
        colUsed[c] = 1;
        rowOrder.push_back(r);
        colOrder.push_back(c);
    }
    vector<array<ll, 3>> ops;
    auto buildSwaps = [&](const vector<ll>& order, ll type){
        vector<ll> pos(n + 1), at(n + 1);
        for(ll i = 1; i <= n; i++){
            pos[i] = i;
            at[i] = i;
        }
        for(ll i = 1; i <= n; i++){
            ll need = order[i - 1];
            ll j = pos[need];
            if(j != i){
                ops.push_back({type, i, j});
                ll x = at[i];
                ll y = at[j];
                swap(at[i], at[j]);
                pos[x] = j;
                pos[y] = i;
            }
        }
    };
    buildSwaps(rowOrder, 1);
    buildSwaps(colOrder, 2);
    cout << (ll)ops.size() << endl;
    for(ll i = 0; i < (ll)ops.size(); i++){
        cout << ops[i][0] << " " << ops[i][1] << " " << ops[i][2] << endl;
    }
    return 0;
}
