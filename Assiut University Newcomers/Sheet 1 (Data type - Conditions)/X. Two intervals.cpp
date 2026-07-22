#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    ll l = max(l1, l2), r = min(r1, r2);
    if(l > r) cout << -1 << endl;
    else cout << l << " " << r << endl;
    return 0;
}
