#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> x(n);
    for(ll i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    vector<ll> ans; ans.push_back(x[0]);
    for(ll i = 0; i < n && ans.size() < 3; i++){
        for(ll j = 0; j <= 31; j++){
            ll d = 1LL << j;
            if(x[i] + d > x[n - 1]) break;
            if(!binary_search(x.begin(), x.end(), x[i] + d)) continue;
            if(binary_search(x.begin(), x.end(), x[i] + 2 * d)){
                ans = {x[i], x[i] + d, x[i] + 2 * d};
                break;
            }
            if(ans.size() < 2) ans = {x[i], x[i] + d};
        }
    }
    cout << ans.size() << endl;
    for(ll i = 0; i < (ll)ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
