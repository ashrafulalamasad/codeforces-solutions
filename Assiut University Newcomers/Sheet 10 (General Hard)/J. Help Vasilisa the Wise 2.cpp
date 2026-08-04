#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll r1, r2, c1, c2, d1, d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for(ll a = 1; a <= 9; a++){
        ll b = r1 - a;
        ll c = c1 - a;
        ll d = d1 - a;
        if(b < 1 || b > 9 || c < 1 || c > 9 || d < 1 || d > 9) continue;
        if(a == b || a == c || a == d || b == c || b == d || c == d) continue;
        if(c + d != r2) continue;
        if(b + d != c2) continue;
        if(b + c != d2) continue;
        cout << a << ' ' << b << endl << c << ' ' << d << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}
