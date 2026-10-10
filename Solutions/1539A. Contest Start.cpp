#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, d; cin >> n >> x >> d;
        ll c = min(d / x, n - 1);
        cout << n * c - c * (c + 1) / 2 << endl;
    }
    return 0;
}
