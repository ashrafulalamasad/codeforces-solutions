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
        ll px = 0;
        for(ll i = 1; i <= n - 3; i++){
            cout << i << ' ';
            px ^= i;
        }
        ll x = 1LL << 29;
        ll y = 1LL << 30;
        ll z = x ^ y ^ px;
        cout << x << ' ' << y << ' ' << z << endl;
    }
    return 0;
}
