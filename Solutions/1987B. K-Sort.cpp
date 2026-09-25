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
        ll pref = 0, sum = 0, mx = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > pref) pref = a[i];
            ll d = pref - a[i];
            sum += d;
            if(d > mx) mx = d;
        }
        cout << sum + mx << endl;
    }
    return 0;
}
