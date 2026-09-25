#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll Q; cin >> Q;
    vector<ll> arr, pre = {0};
    while(Q--){
        ll t; cin >> t;
        if(t == 1){
            ll x; cin >> x;
            arr.push_back(x);
            pre.push_back(pre.back() + x);
        }else{
            ll n = arr.size();
            ll M = arr[n - 1];
            ll lo = 0, hi = n - 1;
            while(lo < hi){
                ll mid = (lo + hi) / 2;
                if((M - arr[mid]) * (mid + 1) <= mid * M - pre[mid]) hi = mid;
                else lo = mid + 1;
            }
            auto g = [&](ll k){ return (double)(k * M - pre[k]) / (k + 1); };
            double ans = 0;
            for(ll k = max(0LL, lo - 1); k <= min(n - 1, lo + 1); k++) ans = max(ans, g(k));
            cout << fixed << setprecision(10) << ans << endl;
        }
    }
    return 0;
}
