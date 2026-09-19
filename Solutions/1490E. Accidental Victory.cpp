#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), idx(n), pref(n), ans;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) idx[i] = i;
        sort(idx.begin(), idx.end(), [&](ll x, ll y){return a[x] < a[y];});
        for(ll i = 0; i < n; i++){
            pref[i] = a[idx[i]];
            if(i > 0) pref[i] = pref[i] + pref[i - 1];
        }
        ll l = n - 1;
        for(ll i = n - 2; i >= 0; i--){
            if(pref[i] < a[idx[i + 1]]) break;
            l = i;
        }
        for(ll i = l; i < n; i++) ans.push_back(idx[i] + 1);
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(ll i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
