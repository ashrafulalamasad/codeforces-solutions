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
        bool ok = true;
        for(ll i = 1; i + 1 < n; i++){
            ll x = a[i - 1];
            a[i] -= 2 * x;
            a[i + 1] -= x;
            if(a[i] < 0 || a[i + 1] < 0){
                ok = false;
                break;
            }
        }
        if(ok && (a[n - 2] != 0 || a[n - 1] != 0)) ok = false;
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
