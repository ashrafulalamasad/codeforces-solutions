#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, k; cin >> n >> k; vector<ll> r(n);
    for(ll i = 0; i < n; i++) cin >> r[i];
    vector<ll> sortedR = r, ans(n);
    sort(sortedR.begin(), sortedR.end());
    for(ll i = 0; i < n; i++){
        ans[i] = lower_bound(sortedR.begin(), sortedR.end(), r[i]) - sortedR.begin();
    }
    for(ll i = 0; i < k; i++){
        ll x, y; cin >> x >> y;
        x--; y--;
        if(r[x] > r[y]){
            ans[x]--;
        }else if(r[y] > r[x]){
            ans[y]--;
        }
    }
    for(ll i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
