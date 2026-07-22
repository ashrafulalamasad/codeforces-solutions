#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    if(ans < 10) cout << 0;
    cout << ans << endl;
    return 0;
}
