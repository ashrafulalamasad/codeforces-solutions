#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, n; cin >> a >> b >> c >> n;
        ll mx = max({a, b, c});
        ll need = (mx - a) + (mx - b) + (mx - c);
        ll remaining = n - need;
        if(remaining >= 0 && remaining % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
