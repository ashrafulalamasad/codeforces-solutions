#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> x(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        map<ll, ll> count;
        for(ll i = 1; i <= n; i++) count[i * (n - i + 1) - 1]++;
        for(ll i = 1; i < n; i++) count[i * (n - i)] += x[i] - x[i - 1] - 1;
        while(q--){
            ll k; cin >> k;
            cout << count[k] << ' ';
        }
        cout << endl;
    }
    return 0;
}
