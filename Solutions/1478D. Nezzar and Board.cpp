#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, g = 0; cin >> n >> k; vector<ll> x(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        sort(x.begin(), x.end());
        for(ll i = 1; i < n; i++) g = __gcd(g, x[i] - x[0]);
        if((k - x[0]) % g == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
