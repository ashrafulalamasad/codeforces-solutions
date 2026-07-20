#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    long double n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil(n/a) * ceil(m/a);
    cout << ans << endl;
    return 0;
}
