#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i].first;
        for(ll i = 0; i < n; i++) cin >> v[i].second;
        sort(v.begin(), v.end());
        for(ll i = 0; i < n; i++){
            if(v[i].first <= k) k += v[i].second;
        }
        cout << k << endl;
    }
    return 0;
}
