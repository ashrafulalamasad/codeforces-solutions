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
        vector<ll> a, cnt(n + 1, 0);
        for(ll i = 0; i < n - 1; i++){
            ll p; cin >> p;
            cnt[p] = cnt[p] + 1;
        }
        for(ll v = 1; v <= n; v++){
            if(cnt[v] > 0) a.push_back(cnt[v]);
        }
        a.push_back(1);
        sort(a.rbegin(), a.rend());
        ll k = a.size(), ans = k;
        vector<ll> b;
        for(ll i = 0; i < k; i++){
            ll rem = a[i] - (k - i);
            if(rem > 0) b.push_back(rem);
        }
        ll m = b.size();
        ll lo = 0, hi = 0;
        for(ll i = 0; i < m; i++) hi = hi + b[i];
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            ll need = 0;
            for(ll i = 0; i < m; i++){
                if(b[i] > mid) need = need + b[i] - mid;
            }
            if(need <= mid) hi = mid;
            else lo = mid + 1;
        }
        ans = ans + lo;
        cout << ans << endl;
    }
    return 0;
}
