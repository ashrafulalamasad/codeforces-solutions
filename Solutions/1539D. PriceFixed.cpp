#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<pair<ll, ll>> p(n);
    for(ll i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        p[i] = {b, a};
    }
    sort(p.begin(), p.end());
    ll j = n - 1, bought = 0, cost = 0;
    for(ll i = 0; i < n; i++){
        while(bought < p[i].first && p[i].second > 0){
            while(j >= 0 && p[j].second == 0) j--;
            if(j < 0) break;
            ll need = p[i].first - bought;
            ll take = min(p[j].second, need);
            p[j].second -= take;
            bought += take;
            cost += 2 * take;
        }
        cost += p[i].second;
        bought += p[i].second;
        p[i].second = 0;
    }
    cout << cost << endl;
    return 0;
}
