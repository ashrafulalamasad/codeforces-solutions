#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll a[101][101], b[101][101], c[101][101];

int main()
{
    fast;
    ll ra, ca; cin >> ra >> ca;
    for(ll i = 0; i < ra; i++){
        for(ll j = 0; j < ca; j++){
            cin >> a[i][j];
        }
    }
    ll rb, cb; cin >> rb >> cb;
    for(ll i = 0; i < rb; i++){
        for(ll j = 0; j < cb; j++){
            cin >> b[i][j];
        }
    }
    for(ll i = 0; i < ra; i++){
        for(ll k = 0; k < ca; k++){
            for(ll j = 0; j < cb; j++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(ll i = 0; i < ra; i++){
        for(ll j = 0; j < cb; j++){
            if(j) cout << " ";
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}
