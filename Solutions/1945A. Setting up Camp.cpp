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
        ll ext = (b + 2) / 3;
        ll rem = b % 3;
        ll need = rem ? 3 - rem : 0;
        if(need > c) cout << -1 << endl;
        else cout << a + ext + (c - need + 2) / 3 << endl;
    }
    return 0;
}
