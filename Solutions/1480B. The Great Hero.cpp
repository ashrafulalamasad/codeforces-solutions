#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll A, B, n; cin >> A >> B >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll sum = 0, mx = 0;
        for(ll i = 0; i < n; i++){
            ll cnt = (b[i] + A - 1) / A;
            sum = sum + cnt * a[i];
            if(a[i] > mx) mx = a[i];
        }
        if(B - sum + mx > 0) cout << "YES" << endl; else cout << "NO" << endl;
    }
    return 0;
}
