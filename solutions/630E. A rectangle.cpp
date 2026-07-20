#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    ll dx = x2 - x1 + 1;
    ll dy = y2 - y1 + 1;
    unsigned long long total = (unsigned long long)dx * (unsigned long long)dy;
    unsigned long long ans = (total + 1ULL) / 2ULL;
    cout << ans << endl;
    return 0;
}
