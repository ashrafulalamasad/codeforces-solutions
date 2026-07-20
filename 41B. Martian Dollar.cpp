#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, b; cin >> n >> b;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = b;
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1; j < n; j++){
            ll dollars = b / a[i];
            ll rem = b % a[i];
            ll sold = dollars * a[j] + rem;
            ans = max(ans, sold);
        }
    }
    cout << ans << endl;
    return 0;
}
