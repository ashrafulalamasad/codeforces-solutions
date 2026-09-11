#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, total = 0; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            cin >> b[i];
            total ^= a[i] ^ b[i];
        }
        if(total == 0){
            cout << "Tie" << endl;
        }else{
            ll bit = 0;
            while((1LL << (bit + 1)) <= total){
                bit++;
            }
            for(ll i = n - 1; i >= 0; i--){
                if(((a[i] ^ b[i]) & (1LL << bit)) != 0){
                    if(i % 2 == 0){
                        cout << "Ajisai" << endl;
                    }else{
                        cout << "Mai" << endl;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
