#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    vector<ll> pref(n + 1, 0);
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        pref[i + 1] = pref[i] + a;
    }
    double best = 0;
    for(ll len = k; len <= n; len++){
        for(ll i = 0; i + len <= n; i++){
            best = max(best, (double)(pref[i + len] - pref[i]) / len);
        }
    }
    cout << fixed << setprecision(12) << best << endl;
    return 0;
}
