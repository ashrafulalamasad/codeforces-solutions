#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        auto check = [&](ll m) -> bool {
            ll used = 0, i = 0;
            while(i < n){
                used++;
                ll lim = a[i] + 2 * m;
                while(i < n && a[i] <= lim) i++;
            }
            return used <= 3;
        };
        ll lo = 0, hi = 1000000000;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            if(check(mid)) hi = mid;
            else lo = mid + 1;
        }
        cout << lo << endl;
    }
    return 0;
}
