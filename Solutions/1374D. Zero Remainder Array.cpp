#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> need; need.reserve(n);
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            ll r = (k - a % k) % k;
            if(r != 0){
                need.push_back(r);
            }
        }
        if(need.empty()){
            cout << 0 << endl;
            continue;
        }
        sort(need.begin(), need.end());
        ll ans = 0;
        ll cnt = 1;
        for(ll i = 1; i < (ll)need.size(); i++){
            if(need[i] == need[i - 1]){
                cnt++;
            }else{
                ans = max(ans, need[i - 1] + (cnt - 1) * k);
                cnt = 1;
            }
        }
        ans = max(ans, need.back() + (cnt - 1) * k);
        cout << ans + 1 << endl;
    }
    return 0;
}
