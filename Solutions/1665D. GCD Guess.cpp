#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll r = 0, p1 = 1, p2 = 2;
        for(ll k = 1; k <= 30; k++){
            ll a = p1 - r;
            ll b = a + p2;
            cout << "? " << a << " " << b << endl;
            ll g; cin >> g;
            if(g == p2) r = r + p1;
            p1 = p1 * 2;
            p2 = p2 * 2;
        }
        cout << "! " << r << endl;
    }
    return 0;
}
