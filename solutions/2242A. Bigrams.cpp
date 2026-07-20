#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k; cin >> k;
        ll cntTwo = 0;
        bool ok = false;
        for(ll i = 0; i < k; i++){
            ll x; cin >> x;
            if(x >= 3) ok = true;
            if(x >= 2) cntTwo++;
        }
        if(cntTwo >= 2) ok = true;
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
