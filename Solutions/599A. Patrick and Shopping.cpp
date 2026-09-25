#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll d1, d2, d3; cin >> d1 >> d2 >> d3;
    ll ans = min({2 * d1 + 2 * d2, d1 + d2 + d3, 2 * d1 + 2 * d3, 2 * d2 + 2 * d3});
    cout << ans << endl;
    return 0;
}
