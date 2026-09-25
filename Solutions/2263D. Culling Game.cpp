#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, size = 1; cin >> n; vector<ll> a(n), p(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            cin >> p[i]; p[i]--;
        }
        while(size < n) size *= 2;
        vector<ll> sum(2 * size);
        vector<vector<array<ll, 3>>> tree(2 * size);
        auto pull = [&](ll node){
            ll left = node * 2, right = left + 1;
            sum[node] = sum[left] + sum[right];
            tree[node].clear();
            ll index = 0, count = tree[right].size();
            for(auto state : tree[left]){
                ll threshold = state[0], skill = state[1], forfeits = state[2];
                while(index < count && tree[right][index][0] <= skill){
                    index++;
                }
                if(index == count) skill += sum[right];
                else{
                    skill = tree[right][index][1];
                    forfeits += tree[right][index][2];
                }
                tree[node].push_back({threshold, skill, forfeits});
            }
            ll maximum = 0;
            if(!tree[left].empty()) maximum = tree[left].back()[0];
            for(auto state : tree[right]){
                ll threshold = state[0] - sum[left];
                if(threshold > maximum) tree[node].push_back({threshold, state[1], state[2]});
            }
        };
        for(ll i = 0; i < n; i++){
            sum[size + i] = a[i];
            tree[size + i].push_back({a[i], a[i], 1});
        }
        for(ll node = size - 1; node > 0; node--){
            pull(node);
        }
        for(ll i = 0; i < n; i++){
            if(i > 0) cout << " ";
            cout << tree[1][0][2] - 1;
            if(i == n - 1) break;
            ll node = size + p[i];
            sum[node] = 0;
            tree[node].clear();
            node /= 2;
            while(node > 0){
                pull(node);
                node /= 2;
            }
        }
        cout << endl;
    }
    return 0;
}
