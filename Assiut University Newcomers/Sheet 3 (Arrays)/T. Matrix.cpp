#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll primary = 0, secondary = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            ll x; cin >> x;
            if(i == j) primary += x;
            if(i + j == n - 1) secondary += x;
        }
    }
    cout << abs(primary - secondary) << endl;
    return 0;
}
