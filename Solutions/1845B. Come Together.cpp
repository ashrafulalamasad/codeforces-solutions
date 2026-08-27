#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll ans = 1, xA, yA, xB, yB, xC, yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;
        ll dxB = xB - xA, dyB = yB - yA;
        ll dxC = xC - xA, dyC = yC - yA;
        if((dxB > 0 && dxC > 0) || (dxB < 0 && dxC < 0)){
            ans += min(abs(dxB), abs(dxC));
        }
        if((dyB > 0 && dyC > 0) || (dyB < 0 && dyC < 0)){
            ans += min(abs(dyB), abs(dyC));
        }
        cout << ans << endl;
    }
    return 0;
}
