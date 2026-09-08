#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0, has = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            sum += x;
            if(x % 3 == 1) has = 1;
        }
        if(sum % 3 == 0){
            cout << 0 << endl;
        }else if(sum % 3 == 2){
            cout << 1 << endl;
        }else{
            cout << (has ? 1 : 2) << endl;
        }
    }
    return 0;
}
