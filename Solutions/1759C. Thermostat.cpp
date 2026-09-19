#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r, x; cin >> l >> r >> x;
        ll a, b; cin >> a >> b;
        ll d = a > b ? a - b : b - a;
        if(a == b) cout << 0 << endl;
        else if(d >= x) cout << 1 << endl;
        else if((a - l >= x && b - l >= x) || (r - a >= x && r - b >= x)) cout << 2 << endl;
        else if(r - l >= x && (a - l >= x || r - a >= x) && (b - l >= x || r - b >= x)) cout << 3 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
