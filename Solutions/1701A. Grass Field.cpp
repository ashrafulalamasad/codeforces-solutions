#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll grass = 0;
        for(ll i = 0; i < 2; i++){
            for(ll j = 0; j < 2; j++){
                ll x; cin >> x;
                grass += x;
            }
        }
        if(grass == 0) cout << 0 << endl;
        else if(grass == 4) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
