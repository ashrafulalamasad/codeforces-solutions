#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> d(n);
        for(ll i = 0; i < n; i++) cin >> d[i];
        sort(d.begin(), d.end());
        ll pref = 0, sum = 0;
        for(ll i = 0; i < n; i++){
            sum += d[i] * i - pref;
            pref += d[i];
        }
        cout << d[n - 1] - sum << endl;
    }
    return 0;
}
