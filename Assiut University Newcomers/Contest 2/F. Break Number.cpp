#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll mx = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        ll cnt = 0;
        while(x % 2 == 0){
            cnt++;
            x /= 2;
        }
        if(cnt > mx) mx = cnt;
    }
    cout << mx << endl;
    return 0;
}
