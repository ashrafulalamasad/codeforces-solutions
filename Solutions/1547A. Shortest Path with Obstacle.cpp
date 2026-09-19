#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll xa, ya; cin >> xa >> ya;
        ll xb, yb; cin >> xb >> yb;
        ll xf, yf; cin >> xf >> yf;
        ll ans = abs(xa - xb) + abs(ya - yb);
        if(xa == xb && xa == xf && min(ya, yb) < yf && yf < max(ya, yb)) ans += 2;
        if(ya == yb && ya == yf && min(xa, xb) < xf && xf < max(xa, xb)) ans += 2;
        cout << ans << endl;
    }
    return 0;
}
