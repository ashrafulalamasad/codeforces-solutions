#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        if(n % 2 == 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
            ll k = (n - 1) / 2;
            cout << 2*k+1 << " " << 2*k+2 << endl;
            for(ll i = 1; i <= k; i++){
                cout << i << " " << 4*k+3-2*i << endl;
            }
            for(ll j = 1; j <= k; j++){
                cout << k+j << " " << 4*k+4-2*j << endl;
            }
        }
    }
    return 0;
}
