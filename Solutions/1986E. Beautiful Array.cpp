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
        map<ll, vector<ll>> groups;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            groups[x % k].push_back(x);
        }
        ll oddCount = 0, ans = 0;
        bool ok = true;
        for(auto &[r, v] : groups){
            sort(v.begin(), v.end());
            ll m = v.size();
            if(m % 2 == 0){
                for(ll i = 0; i + 1 < m; i += 2) ans += (v[i + 1] - v[i]) / k;
            }else{
                oddCount++;
                if(oddCount > 1 || n % 2 == 0){
                    ok = false;
                    break;
                }
                vector<ll> d(m - 1);
                for(ll i = 0; i + 1 < m; i++) d[i] = (v[i + 1] - v[i]) / k;
                vector<ll> pre(m + 1, 0), suf(m + 1, 0);
                for(ll i = 0; i < m - 1; i++) pre[i + 1] = pre[i] + (i % 2 == 0 ? d[i] : 0);
                for(ll i = m - 2; i >= 0; i--) suf[i] = suf[i + 1] + (i % 2 == 1 ? d[i] : 0);
                ll best = LLONG_MAX;
                for(ll j = 0; j < m; j += 2) best = min(best, pre[j] + suf[j + 1]);
                ans += best;
            }
        }
        if(ok) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}
