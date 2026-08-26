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
        vector<ll> evens, odds;
        for(ll i = 0; i < n; i++){
            if(a[i] % 2 == 0) evens.push_back(a[i]);
            else odds.push_back(a[i]);
        }
        ll E = evens.size();
        ll ans = E * n - E * (E + 1) / 2;
        for(ll i = 0; i < (ll)odds.size(); i++){
            for(ll j = i + 1; j < (ll)odds.size(); j++){
                if(__gcd(odds[i], odds[j]) > 1) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
