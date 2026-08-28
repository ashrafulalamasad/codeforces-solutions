#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, n; cin >> x >> n;
        cout << (n % 2 == 0 ? 0 : x) << endl;
    }
    return 0;
}
