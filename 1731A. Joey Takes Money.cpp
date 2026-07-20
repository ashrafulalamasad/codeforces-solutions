#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    tc{
        ll n, prod = 1; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            prod *= x;
        }
        cout << 2022 * (prod + n - 1) << endl;
    }
    return 0;
}
