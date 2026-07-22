#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    bool found = 0;
    for(ll i = a; i <= b; i++){
        ll x = i;
        bool lucky = 1;
        while(x > 0){
            ll d = x % 10;
            if(d != 4 && d != 7){
                lucky = 0;
                break;
            }
            x /= 10;
        }
        if(lucky){
            cout << i << " ";
            found = 1;
        }
    }
    if(!found) cout << -1;
    cout << endl;
    return 0;
}
