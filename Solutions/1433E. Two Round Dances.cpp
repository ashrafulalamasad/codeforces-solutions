#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll fact = 1;
    for(ll i = 1; i <= n; i++){
        fact *= i;
    }
    ll k = n / 2;
    ll ans = fact / (2 * k * k);
    cout << ans << endl;
    return 0;
}
