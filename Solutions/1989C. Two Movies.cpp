#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll x = 0, y = 0, neg = 0, pos = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > b[i]) x += a[i];
            else if(a[i] < b[i]) y += b[i];
            else{
                neg += (a[i] < 0);
                pos += (a[i] > 0);
            }
        }
        ll ans = LLONG_MIN;
        for(ll i = -neg; i <= pos; i++) ans = max(ans, min(x + i, y + pos - neg - i));
        cout << ans << endl;
    }
    return 0;
}
