#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string r, k; cin >> r >> k;
    ll rx = r[0] - 'a', ry = r[1] - '1';
    ll kx = k[0] - 'a', ky = k[1] - '1', ans = 0;
    for(ll x = 0; x < 8; x++){
        for(ll y = 0; y < 8; y++){
            if(x == rx && y == ry) continue;
            if(x == kx && y == ky) continue;
            if(x == rx || y == ry) continue;
            if(abs(x - rx) == 1 && abs(y - ry) == 2) continue;
            if(abs(x - rx) == 2 && abs(y - ry) == 1) continue;
            if(abs(x - kx) == 1 && abs(y - ky) == 2) continue;
            if(abs(x - kx) == 2 && abs(y - ky) == 1) continue;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
