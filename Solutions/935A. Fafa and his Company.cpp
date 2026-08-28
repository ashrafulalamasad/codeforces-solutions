#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; ll ans = 0;
    for(ll l = 1; l < n; l++){
        if(n % l == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}
