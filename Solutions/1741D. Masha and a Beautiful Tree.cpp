#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m, ans = 0; cin >> m; vector<ll> p(m);
        for(ll i = 0; i < m; i++) cin >> p[i];
        bool ok = true;
        function<void(ll, ll)> solve = [&](ll l, ll r){
            if(l == r) return;
            ll mid = (l + r) / 2;
            solve(l, mid); solve(mid + 1, r);
            ll leftMin = *min_element(p.begin() + l, p.begin() + mid + 1);
            ll rightMin = *min_element(p.begin() + mid + 1, p.begin() + r + 1);
            if(leftMin > rightMin){
                ans++;
                for(ll i = l; i <= mid; i++) swap(p[i], p[i + (mid + 1 - l)]);
            }
            leftMin = *min_element(p.begin() + l, p.begin() + mid + 1);
            rightMin = *min_element(p.begin() + mid + 1, p.begin() + r + 1);
            if(leftMin > rightMin) ok = false;
        };
        solve(0, m - 1);
        for(ll i = 1; i < m; i++){
            if(p[i] < p[i - 1]) ok = false;
        }
        if(ok) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}
