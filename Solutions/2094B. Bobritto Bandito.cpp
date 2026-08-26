#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, l, r; cin >> n >> m >> l >> r;
        ll lp = max(l, -m);
        ll rp = max(0LL, l + m);
        cout << lp << " " << rp << endl;
    }
    return 0;
}
