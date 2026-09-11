#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 1; cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++){
            if(a[i] > b[i]) ans += a[i] - b[i];
        }
        cout << ans << endl;
    }
    return 0;
}
