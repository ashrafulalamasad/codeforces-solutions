#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, c; cin >> n >> c; vector<ll> s(n);
        for(ll i = 0; i < n; ++i) cin >> s[i];
        ll lo = 1, hi = 1e9, ans = 0;
        while(lo <= hi){
            ll mid = (lo + hi) / 2;
            ll total = 0;
            for(ll i = 0; i < n; ++i){
                ll term = s[i] + 2 * mid;
                total += (ll)term * term;
                if(total > c) break;
            }
            if(total == c){ ans = mid; break; }
            else if(total < c) lo = mid + 1;
            else hi = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
