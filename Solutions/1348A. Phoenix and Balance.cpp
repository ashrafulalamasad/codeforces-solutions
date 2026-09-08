#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll ans = (1LL << n);
        for(ll i = 1; i < n/2; i++) ans += (1LL << i);
        for(ll i = n/2; i < n; i++) ans -= (1LL << i);
        cout << ans << endl;
    }
    return 0;
}
