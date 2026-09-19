#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;
        ll l1 = min(min(x1, y1), min(n - x1 + 1, n - y1 + 1));
        ll l2 = min(min(x2, y2), min(n - x2 + 1, n - y2 + 1));
        cout << llabs(l1 - l2) << endl;
    }
    return 0;
}
