#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n;
    ll min_r1 = LLONG_MAX, max_l1 = LLONG_MIN;
    for(ll i=0; i<n; i++){
        ll l, r; cin >> l >> r;
        if(r < min_r1) min_r1 = r;
        if(l > max_l1) max_l1 = l;
    }
    ll m; cin >> m;
    ll min_r2 = LLONG_MAX, max_l2 = LLONG_MIN;
    for(ll i=0; i<m; i++){
        ll l, r; cin >> l >> r;
        if(r < min_r2) min_r2 = r;
        if(l > max_l2) max_l2 = l;
    }
    ll cand1 = max_l2 - min_r1;
    ll cand2 = max_l1 - min_r2;
    ll ans = max(0LL, max(cand1, cand2));
    cout << ans << endl;
    return 0;
}
