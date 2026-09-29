#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, k; cin >> a >> b >> k;
        ll g = gcd(a, b);
        cout << (max(a / g, b / g) <= k ? 1 : 2) << endl;
    }
    return 0;
}
