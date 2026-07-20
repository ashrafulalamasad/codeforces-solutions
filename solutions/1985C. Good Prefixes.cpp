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
        ll sum = 0, mx = 0, ans = 0;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            sum += x;
            mx = max(mx, x);
            if(sum == 2 * mx) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
