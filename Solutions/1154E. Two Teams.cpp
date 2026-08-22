#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> pos(n + 1);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        pos[x] = i;
    }
    vector<ll> L(n), R(n);
    for(ll i = 0; i < n; i++){
        L[i] = i - 1;
        R[i] = i + 1;
    }
    string ans(n, '0'); ll team = 1;
    for(ll skill = n; skill >= 1; skill--){
        ll idx = pos[skill];
        if(ans[idx] != '0'){
            continue;
        }
        ll l = idx;
        for(ll cnt = 0; cnt < k && L[l] != -1; cnt++){
            l = L[l];
        }
        ll r = idx;
        for(ll cnt = 0; cnt < k && R[r] != n; cnt++){
            r = R[r];
        }
        ll before = L[l];
        ll after = R[r];
        for(ll x = l; x != after; x = R[x]){
            ans[x] = char('0' + team);
        }
        if(before != -1){
            R[before] = after;
        }
        if(after != n){
            L[after] = before;
        }
        team = 3 - team;
    }
    cout << ans << endl;
    return 0;
}
