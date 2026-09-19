#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> x(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        vector<ll> y(n, 0); ll prev = x[0];
        for(ll i = 1; i < n; i++){
            y[i] = prev & ~x[i];
            prev = x[i] ^ y[i];
        }
        for(ll i = 0; i < n; i++) cout << y[i] << " ";
        cout << endl;
    }
    return 0;
}
