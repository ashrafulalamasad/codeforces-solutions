#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<pair<ll,ll>> seg(n);
        for(ll i = 0; i < n; i++){
            ll l, r, a, b; cin >> l >> r >> a >> b;
            seg[i] = {l, b};
        }
        sort(seg.begin(), seg.end());
        vector<pair<ll,ll>> merged;
        merged.reserve(n);
        for(ll i = 0; i < n; i++){
            if(merged.empty() || seg[i].first > merged.back().second){
                merged.push_back(seg[i]);
            }else{
                merged.back().second = max(merged.back().second, seg[i].second);
            }
        }
        ll q; cin >> q;
        for(ll i = 0; i < q; i++){
            ll x; cin >> x;
            ll low = 0, high = (ll)merged.size() - 1, idx = -1;
            while(low <= high){
                ll mid = (low + high) / 2;
                if(merged[mid].first <= x){
                    idx = mid;
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
            ll ans = x;
            if(idx != -1 && merged[idx].second >= x){
                ans = merged[idx].second;
            }
            if(i > 0){
                cout << ' ';
            }
            cout << ans;
        }
        cout << endl;
    }
    return 0;
}
