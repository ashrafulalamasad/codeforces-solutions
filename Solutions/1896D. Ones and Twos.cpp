#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    struct Node{
        ll sum, pref[2], suff[2], best[2];
    };
    tc{
        ll n, q; cin >> n >> q;
        const ll NEG = -1000000000000000000LL;
        auto make_empty = [&]() -> Node {
            Node e;
            e.sum = 0;
            for(ll p = 0; p < 2; p++){
                e.pref[p] = NEG;
                e.suff[p] = NEG;
                e.best[p] = NEG;
            }
            return e;
        };
        auto make_node = [&](ll v) -> Node {
            Node res = make_empty();
            res.sum = v;
            res.pref[v & 1] = v;
            res.suff[v & 1] = v;
            res.best[v & 1] = v;
            return res;
        };
        auto merge_nodes = [&](const Node& L, const Node& R) -> Node {
            if(L.sum == 0){
                return R;
            }
            if(R.sum == 0){
                return L;
            }
            Node res;
            res.sum = L.sum + R.sum;
            for(ll p = 0; p < 2; p++){
                res.pref[p] = L.pref[p];
                ll need = p ^ (L.sum & 1);
                if(R.pref[need] > NEG / 2){
                    res.pref[p] = max(res.pref[p], L.sum + R.pref[need]);
                }
                res.suff[p] = R.suff[p];
                need = p ^ (R.sum & 1);
                if(L.suff[need] > NEG / 2){
                    res.suff[p] = max(res.suff[p], R.sum + L.suff[need]);
                }
                res.best[p] = max(L.best[p], R.best[p]);
            }
            for(ll qpar = 0; qpar < 2; qpar++){
                for(ll rpar = 0; rpar < 2; rpar++){
                    if(L.suff[qpar] > NEG / 2 && R.pref[rpar] > NEG / 2){
                        ll p = qpar ^ rpar;
                        res.best[p] = max(res.best[p], L.suff[qpar] + R.pref[rpar]);
                    }
                }
            }
            return res;
        };
        ll size = 1;
        while(size < n){
            size *= 2;
        }
        Node empty = make_empty();
        vector<Node> seg(2 * size, empty);
        for(ll i = 0; i < n; i++){
            ll v; cin >> v;
            seg[size + i] = make_node(v);
        }
        for(ll i = size - 1; i >= 1; i--){
            seg[i] = merge_nodes(seg[2 * i], seg[2 * i + 1]);
        }
        for(ll qi = 0; qi < q; qi++){
            ll op; cin >> op;
            if(op == 1){
                ll s; cin >> s;
                if(seg[1].best[s & 1] >= s){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }else{
                ll i, v; cin >> i >> v;
                ll pos = size + i - 1;
                seg[pos] = make_node(v);
                pos /= 2;
                while(pos >= 1){
                    seg[pos] = merge_nodes(seg[2 * pos], seg[2 * pos + 1]);
                    pos /= 2;
                }
            }
        }
    }
    return 0;
}
