#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll s, n; cin >> s >> n;
    vector<pair<ll,ll>> d(n);
    for(ll i = 0; i < n; i++) cin >> d[i].first >> d[i].second;
    sort(d.begin(), d.end());
    for(auto &p : d){
        if(s > p.first) s += p.second;
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
