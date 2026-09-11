#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, g, b; cin >> n >> g >> b;
        ll h = (n + 1) / 2;
        ll full = (h - 1) / g;
        ll rem = h - full * g;
        ll D = full * (g + b) + rem;
        cout << max(n, D) << endl;
    }
    return 0;
}
