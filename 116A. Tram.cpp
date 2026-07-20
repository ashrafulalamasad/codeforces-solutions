#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll mx = 0, temp = 0;
    for(ll i=0; i<n; i++){
        ll a, b; cin >> a >> b;
        temp = temp - a + b;
        mx = max(mx, temp);
    }
    cout << mx << endl;
    return 0;
}
