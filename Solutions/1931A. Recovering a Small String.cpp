#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll first = max(1LL, n - 52);
        ll rem = n - first;
        ll second = max(1LL, rem - 26);
        ll third = rem - second;
        cout << char('a' + first - 1) << char('a' + second - 1) << char('a' + third - 1) << endl;
    }
    return 0;
}
