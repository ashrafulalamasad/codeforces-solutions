#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll x = 0;
        for(ll i = 0; i < n; i++){
            ll v; cin >> v; x ^= v;
        }
        if(n % 2 == 1){
            cout << x << endl;
        }else if(x == 0){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
