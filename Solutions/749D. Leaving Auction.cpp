#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> last(n + 1, 0);
    vector<ll> bidValue(n + 1); vector<vector<ll>> bids(n + 1);
    for(ll i = 1; i <= n; i++){
        ll a, b; cin >> a >> b;
        last[a] = i; bidValue[i] = b;
        bids[a].push_back(i);
    }
    vector<ll> order; order.reserve(n);
    for(ll i = 1; i <= n; i++){
        if(last[i] > 0) order.push_back(i);
    }
    sort(order.begin(), order.end(), [&](ll x, ll y){
        return last[x] > last[y];
    });
    ll m = (ll)order.size();
    vector<ll> mark(n + 1, 0);
    ll q, timer = 1; cin >> q;
    while(q--){
        ll k; cin >> k;
        for(ll i = 0; i < k; i++){
            ll x; cin >> x;
            mark[x] = timer;
        }
        ll first = 0, second = 0;
        for(ll i = 0; i < m; i++){
            ll p = order[i];
            if(mark[p] != timer){
                if(first == 0){
                    first = p;
                }else{
                    second = p;
                    break;
                }
            }
        }
        if(first == 0){
            cout << 0 << " " << 0 << endl;
        }else{
            ll threshold = 0;
            if(second != 0){
                threshold = last[second];
            }
            ll idx = *upper_bound(bids[first].begin(), bids[first].end(), threshold);
            cout << first << " " << bidValue[idx] << endl;
        }
        timer++;
    }
    return 0;
}
