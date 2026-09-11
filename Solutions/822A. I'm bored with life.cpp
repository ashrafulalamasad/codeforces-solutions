#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    ll m = min(a, b);
    ll ans = 1;
    for(ll i = 1; i <= m; i++){
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}
