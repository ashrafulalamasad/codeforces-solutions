#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, sx, sy, d; cin >> n >> m >> sx >> sy >> d;
        if(min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d) cout << -1 << endl;
        else cout << n + m - 2 << endl;
    }
    return 0;
}
