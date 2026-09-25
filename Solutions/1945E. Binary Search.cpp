#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x;
        vector<ll> p(n); ll posX = 0;
        for(ll i = 0; i < n; i++){
            cin >> p[i];
            if(p[i] == x) posX = i;
        }
        ll l = 0, r = n;
        while(r - l > 1){
            ll m = (l + r) / 2;
            if(p[m] <= x) l = m;
            else r = m;
        }
        if(p[l] == x) cout << 0 << endl;
        else{
            cout << 1 << endl;
            cout << l + 1 << " " << posX + 1 << endl;
        }
    }
    return 0;
}
