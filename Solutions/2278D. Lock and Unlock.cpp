#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; cin >> n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        for(ll x : a) sum += abs(x - a[n/2]);
        cout << sum << " " << a[n-1] - a[0] << endl;
    }
    return 0;
}
