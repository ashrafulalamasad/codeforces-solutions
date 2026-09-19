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
        cout << (k + 1) / 2 * a - k / 2 * b << endl;
    }
    return 0;
}
