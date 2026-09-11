#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll mn = min_element(a.begin(), a.end()) - a.begin();
        ll mx = max_element(a.begin(), a.end()) - a.begin();
        if(mn > mx) swap(mn, mx);
        cout << min({mx + 1, n - mn, mn + 1 + n - mx}) << endl;
    }
    return 0;
}
