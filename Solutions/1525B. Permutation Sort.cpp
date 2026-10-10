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
        ll ok = 1, ans = 2;
        for(ll i = 0; i < n; i++) if(a[i] != i + 1) ok = 0;
        if(ok == 1) ans = 0;
        else if(a[0] == 1 || a[n - 1] == n) ans = 1;
        else if(a[0] == n && a[n - 1] == 1) ans = 3;
        cout << ans << endl;
    }
    return 0;
}
