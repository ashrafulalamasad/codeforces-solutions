#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, s; cin >> k >> s;
    ll cnt = 0;
    for(ll x = 0; x <= k; x++){
        for(ll y = 0; y <= k; y++){
            ll z = s - x - y;
            if(z >= 0 && z <= k) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
