#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        ll t1 = abs(a - 1);
        ll t2 = abs(b - c) + abs(c - 1);
        if(t1 < t2) cout << "1\n";
        else if(t1 > t2) cout << "2\n";
        else cout << "3\n";
    }
    return 0;
}
