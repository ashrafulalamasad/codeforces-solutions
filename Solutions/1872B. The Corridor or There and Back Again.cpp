#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll ans = LLONG_MAX;
        for(ll i = 0; i < n; i++){
            ll d, s; cin >> d >> s;
            ans = min(ans, d + (s - 1) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}
