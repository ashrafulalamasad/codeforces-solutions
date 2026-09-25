#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x; cin >> x; ll a[4];
        cin >> a[1] >> a[2] >> a[3];
        ll cur = x, ok = 1;
        for(ll i = 0; i < 2; i++){
            cur = a[cur];
            if(cur == 0) ok = 0;
        }
        if(ok == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
