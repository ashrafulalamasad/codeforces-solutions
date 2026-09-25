#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, p = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        bool ok = true;
        for(ll i = 0; i < n; i++){
            p += a[i];
            if(p < (i + 1) * (i + 2) / 2) ok = false;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
