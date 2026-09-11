#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll k = -1, ok = 1;
        for(ll i = 0; i < n; i++){
            if(b[i] > a[i]) ok = 0;
            if(b[i] > 0){
                if(k == -1){
                    k = a[i] - b[i];
                }else if(a[i] - b[i] != k){
                    ok = 0;
                }
            }
        }
        if(k != -1){
            for(ll i = 0; i < n; i++){
                if(b[i] == 0 && a[i] > k){
                    ok = 0;
                }
            }
        }
        if(ok == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
