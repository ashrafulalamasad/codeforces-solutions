#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x; cin >> x;
        if((x & (x - 1)) == 0 || (x & (x + 1)) == 0){
            cout << -1 << endl;
            continue;
        }
        ll hb = 63 - __builtin_clzll(x);
        ll y = (x ^ (1LL << hb)) | (1LL << __builtin_ctzll(~x));
        cout << y << endl;
    }
    return 0;
}
