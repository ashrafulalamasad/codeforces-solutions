#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        set<ll> distinct(a.begin(), a.end());
        if(distinct.size() > k){
            cout << -1 << endl;
            continue;
        }
        vector<ll> cycle, result;
        for(ll x : distinct) cycle.push_back(x);
        while(cycle.size() < k) cycle.push_back(*distinct.begin());
        for(ll i = 0; i < n; i++){
            for(ll x : cycle) result.push_back(x);
        }
        cout << result.size() << endl;
        for(ll i = 0; i < result.size(); i++){
            cout << result[i] << (i + 1 == result.size() ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
