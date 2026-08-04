#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<pair<ll, ll>> d(n);
    for(ll i = 0; i < n; i++) cin >> d[i].first >> d[i].second;
    sort(d.begin(), d.end(), [](auto &x, auto &y){
        return x.second - x.first < y.second - y.first;
    });
    ll spent = 0, ans = 0;
    for(auto &p : d){
        ans = max(ans, p.first + spent);
        spent += p.second;
    }
    cout << ans << endl;
    return 0;
}
