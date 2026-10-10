#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> a(n), cost;
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(ll i = 1; i < n; i++){
        if(a[i] - a[i - 1] > x) cost.push_back((a[i] - a[i - 1] - 1) / x);
    }
    sort(cost.begin(), cost.end());
    ll m = cost.size();
    ll groups = m + 1;
    for(ll i = 0; i < m; i++){
        if(cost[i] > k) break;
        k -= cost[i];
        groups--;
    }
    cout << groups << endl;
    return 0;
}
