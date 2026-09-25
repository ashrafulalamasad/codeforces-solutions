#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll xLow = -100000;
        ll xHigh = 100000;
        ll yLow = -100000;
        ll yHigh = 100000;
        for(ll i = 0; i < n; i++){
            ll x, y, f1, f2, f3, f4; cin >> x >> y >> f1 >> f2 >> f3 >> f4;
            if(f1 == 0 && x > xLow) xLow = x;
            if(f3 == 0 && x < xHigh) xHigh = x;
            if(f4 == 0 && y > yLow) yLow = y;
            if(f2 == 0 && y < yHigh) yHigh = y;
        }
        if(xLow <= xHigh && yLow <= yHigh) cout << 1 << " " << xLow << " " << yLow << endl;
        else cout << 0 << endl;
    }
    return 0;
}
