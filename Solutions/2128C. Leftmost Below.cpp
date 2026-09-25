#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll mn = b[0], ok = 1;
        for(ll i = 1; i < n; i++){
            if(b[i] >= 2 * mn) ok = 0;
            if(b[i] < mn) mn = b[i];
        }
        if(ok == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
