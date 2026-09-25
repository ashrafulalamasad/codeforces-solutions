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
        ll mn = 101, ans = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        for(ll i = 0; i < n; i++){
            if(a[i] != mn) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
