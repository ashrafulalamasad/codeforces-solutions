#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        cout << max(0LL, max(b, c) - a + 1) << " " << max(0LL, max(a, c) - b + 1) << " " << max(0LL, max(a, b) - c + 1) << endl;
    }
    return 0;
}
