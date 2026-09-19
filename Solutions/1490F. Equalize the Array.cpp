#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), f;
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(ll i = 0; i < n; i++){
            ll j = i;
            while(j < n && a[j] == a[i]) j++;
            f.push_back(j - i);
            i = j - 1;
        }
        sort(f.begin(), f.end());
        ll m = f.size(), best = n;
        for(ll i = 0; i < m; i++) best = min(best, n - f[i] * (m - i));
        cout << best << endl;
    }
    return 0;
}
