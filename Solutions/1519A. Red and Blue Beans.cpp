#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll r, b, d; cin >> r >> b >> d;
        ll mn = min(r, b), mx = max(r, b);
        if(mn * (d + 1) >= mx) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
