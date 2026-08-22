#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    struct Operation{
        ll end, type, x, l;
    };
    const ll LIMIT = 100000;
    ll m; cin >> m;
    vector<Operation> ops;
    ops.reserve(m);
    vector<ll> first;
    first.reserve(LIMIT);
    ll len = 0;
    for(ll i = 0; i < m; i++){
        ll type; cin >> type;
        if(type == 1){
            ll x; cin >> x;
            len++;
            if((ll)first.size() < LIMIT){
                first.push_back(x);
            }
            ops.push_back({len, 1, x, 0});
        }else{
            ll l, c; cin >> l >> c;
            ll add = l * c;
            if((ll)first.size() < LIMIT){
                ll need = min(add, LIMIT - (ll)first.size());
                for(ll j = 0; j < need; j++){
                    ll val = first[j % l];
                    first.push_back(val);
                }
            }
            len += add;
            ops.push_back({len, 2, 0, l});
        }
    }
    ll n; cin >> n;
    for(ll i = 0; i < n; i++){
        ll pos; cin >> pos;
        ll lo = 0, hi = (ll)ops.size() - 1;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            if(ops[mid].end >= pos){
                hi = mid;
            }else{
                lo = mid + 1;
            }
        }
        Operation op = ops[lo];
        ll ans;
        if(op.type == 1){
            ans = op.x;
        }else{
            ll prev = 0;
            if(lo > 0){
                prev = ops[lo - 1].end;
            }
            ll idx = (pos - prev - 1) % op.l;
            ans = first[idx];
        }
        if(i > 0){
            cout << ' ';
        }
        cout << ans;
    }
    cout << endl;
    return 0;
}
