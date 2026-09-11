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
        bool ok = (a[n - 1] == b[n - 1]);
        for(ll i = n - 2; i >= 0; i--){
            if(b[i] == a[i]) continue;
            if(b[i] != (a[i] ^ a[i + 1]) && b[i] != (a[i] ^ b[i + 1])) ok = false;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
