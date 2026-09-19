#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<pair<ll, ll>> ab(n);
        for(ll i = 0; i < n; i++) cin >> ab[i].first;
        for(ll i = 0; i < n; i++) cin >> ab[i].second;
        sort(ab.begin(), ab.end());
        for(ll i = 0; i < n; i++) cout << ab[i].first << " ";
        cout << endl;
        for(ll i = 0; i < n; i++) cout << ab[i].second << " ";
        cout << endl;
    }
    return 0;
}
