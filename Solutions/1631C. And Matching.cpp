#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        if(k == n - 1 && n == 4){
            cout << -1 << endl;
            continue;
        }
        vector<ll> used(n, 0);
        vector<pair<ll, ll>> ans;
        if(k < n - 1){
            if(k > 0){
                ans.push_back({n - 1, k});
                used[n - 1] = 1; used[k] = 1;
                ans.push_back({0, n - 1 - k});
                used[0] = 1; used[n - 1 - k] = 1;
            }
            for(ll i = 0; i < n; i++){
                if(used[i] == 0){
                    ll j = n - 1 - i;
                    if(i < j){
                        ans.push_back({i, j});
                        used[i] = 1; used[j] = 1;
                    }
                }
            }
        }else{
            ans.push_back({n - 1, n - 2});
            used[n - 1] = 1; used[n - 2] = 1;
            ans.push_back({1, 3});
            used[1] = 1; used[3] = 1;
            ans.push_back({0, n - 4});
            used[0] = 1; used[n - 4] = 1;
            for(ll i = 0; i < n; i++){
                if(used[i] == 0){
                    ll j = n - 1 - i;
                    if(i < j){
                        ans.push_back({i, j});
                        used[i] = 1; used[j] = 1;
                    }
                }
            }
        }
        for(ll i = 0; i < (ll)ans.size(); i++){
            cout << ans[(size_t)i].first << " " << ans[(size_t)i].second << endl;
        }
    }
    return 0;
}
