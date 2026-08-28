#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, d, k; cin >> n >> d >> k;
        ll last = n - d + 1;
        vector<ll> diff(n + 2, 0);
        for(ll i = 0; i < k; i++){
            ll l, r; cin >> l >> r;
            ll lo = max(1LL, l - d + 1), hi = min(last, r);
            if(lo > hi) continue;
            diff[lo]++; diff[hi + 1]--;
        }
        ll cur = 0, bmx = -1, bs = 1, bmn = LLONG_MAX, ms = 1;
        for(ll s = 1; s <= last; s++){
            cur += diff[s];
            if(cur > bmx){
                bmx = cur; bs = s;
            }
            if(cur < bmn){
                bmn = cur; ms = s;
            }
        }
        cout << bs << " " << ms << endl;
    }
    return 0;
}
