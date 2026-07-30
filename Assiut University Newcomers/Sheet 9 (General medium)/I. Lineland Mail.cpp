#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> x(n);
    for(ll i = 0; i < n; i++) cin >> x[i];
    cout << x[1] - x[0] << " " << x[n - 1] - x[0] << endl;
    for(ll i = 1; i < n - 1; i++){
        ll mn = min(x[i] - x[i - 1], x[i + 1] - x[i]);
        ll mx = max(x[i] - x[0], x[n - 1] - x[i]);
        cout << mn << " " << mx << endl;
    }
    if(n > 1) cout << x[n - 1] - x[n - 2] << " " << x[n - 1] - x[0] << endl;
    return 0;
}
