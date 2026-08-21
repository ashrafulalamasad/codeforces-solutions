#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n;
vector<pair<ll, ll>> ans;
bool dfs(vector<ll>& a, ll depth){
    vector<ll> bps; bps.push_back(0); bps.push_back(n);
    for(ll i = 1; i < n; i++){
        if(a[i + 1] != a[i] + 1 && a[i + 1] != a[i] - 1){
            bps.push_back(i);
        }
    }
    if((ll)bps.size() == 2 && a[1] == 1){
        return true;
    }
    if(depth == 0){
        return false;
    }
    if((ll)bps.size() > 2 * depth + 2){
        return false;
    }
    set<ll> cand;
    for(ll i = 0; i < (ll)bps.size(); i++){
        ll bp = bps[i];
        if(bp >= 1 && bp <= n){
            cand.insert(bp);
        }
        if(bp + 1 >= 1 && bp + 1 <= n){
            cand.insert(bp + 1);
        }
    }
    vector<ll> v(cand.begin(), cand.end());
    for(ll i = 0; i < (ll)v.size(); i++){
        for(ll j = i + 1; j < (ll)v.size(); j++){
            ll l = v[i];
            ll r = v[j];
            reverse(a.begin() + l, a.begin() + r + 1);
            ans.push_back({l, r});
            if(dfs(a, depth - 1)){
                return true;
            }
            ans.pop_back();
            reverse(a.begin() + l, a.begin() + r + 1);
        }
    }
    return false;
}

int main()
{
    fast;
    cin >> n; vector<ll> a(n + 2);
    a[0] = 0; a[n + 1] = n + 1;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    dfs(a, 3);
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(ll i = 0; i < (ll)ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}
