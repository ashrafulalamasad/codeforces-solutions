#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y; cin >> x >> y;
        ll ans = 1;
        while(x % 2 == y % 2){
            x = x / 2;
            y = y / 2;
            ans = ans * 2;
        }
        cout << ans << endl;
    }
    return 0;
}
