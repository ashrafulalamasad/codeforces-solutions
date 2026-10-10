#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, d, cnt = 0; cin >> n >> m >> d;
    vector<ll> a(n), ans(n, 0);
    for(ll i = 0; i < n; i++) cin >> a[i];
    set<pair<ll, ll>> s;
    for(ll i = 0; i < n; i++) s.insert({a[i], i});
    while(s.size() > 0){
        cnt++;
        auto it = s.begin();
        ll pos = it->second;
        ll last = it->first;
        ans[pos] = cnt;
        s.erase(it);
        while(true){
            auto jt = s.lower_bound({last + d + 1, -1});
            if(jt == s.end()) break;
            pos = jt->second;
            last = jt->first;
            ans[pos] = cnt;
            s.erase(jt);
        }
    }
    cout << cnt << endl;
    for(ll i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
