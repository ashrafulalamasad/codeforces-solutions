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
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        ll m = a.size(), best = 0;
        for(ll i = 0; i < m; i++){
            ll j = i;
            while(j + 1 < m && a[j + 1] == a[j] + 1) j++;
            best = max(best, a[j] - a[i] + 1);
        }
        cout << best << endl;
    }
    return 0;
}
