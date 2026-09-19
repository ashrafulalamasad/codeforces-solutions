#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; char trump; cin >> n >> trump;
        vector<string> all(2 * n);
        for(ll i = 0; i < 2 * n; i++) cin >> all[i];
        vector<string> trumps; map<char, vector<string>> rest;
        for(ll i = 0; i < 2 * n; i++){
            if(all[i][1] == trump) trumps.push_back(all[i]);
            else rest[all[i][1]].push_back(all[i]);
        }
        sort(trumps.begin(), trumps.end());
        vector<pair<string, string>> ans;
        vector<string> left;
        for(auto &p : rest){
            vector<string> &v = p.second;
            sort(v.begin(), v.end());
            for(ll i = 0; i + 1 < (ll)v.size(); i += 2) ans.push_back({v[i], v[i + 1]});
            if((ll)v.size() % 2 == 1) left.push_back(v.back());
        }
        if((ll)left.size() > (ll)trumps.size()) cout << "IMPOSSIBLE" << endl;
        else{
            for(ll i = 0; i < (ll)left.size(); i++) ans.push_back({left[i], trumps[i]});
            for(ll i = (ll)left.size(); i + 1 < (ll)trumps.size(); i += 2) ans.push_back({trumps[i], trumps[i + 1]});
            for(ll i = 0; i < (ll)ans.size(); i++) cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}
