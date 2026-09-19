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
        for(ll i = 0; i < n; i++) if(a[i] % 10 == 5) a[i] = a[i] + 5;
        bool hasZero = false;
        for(ll i = 0; i < n; i++) if(a[i] % 10 == 0) hasZero = true;
        if(hasZero){
            bool ok = true;
            for(ll i = 1; i < n; i++) if(a[i] != a[0]) ok = false;
            if(ok) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else{
            for(ll i = 0; i < n; i++) while(a[i] % 10 != 2) a[i] = a[i] + a[i] % 10;
            bool ok = true;
            for(ll i = 1; i < n; i++) if(a[i] % 20 != a[0] % 20) ok = false;
            if(ok) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
