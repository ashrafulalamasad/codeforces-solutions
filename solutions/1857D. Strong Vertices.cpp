#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll mx = -3e18;
        vector<ll> ans;
        for(ll i = 0; i < n; i++){
            ll diff = a[i] - b[i];
            if(diff > mx){
                mx = diff;
                ans.clear();
                ans.push_back(i + 1);
            }else if(diff == mx){
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << endl;
        for(ll x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
