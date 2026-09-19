#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ok = 1; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll mnOdd = 1000000000, hasOdd = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] % 2 == 1){
                hasOdd = 1;
                mnOdd = min(mnOdd, a[i]);
            }
        }
        if(hasOdd == 0){
            cout << "YES" << endl;
            continue;
        }
        for(ll i = 0; i < n; i++){
            if(a[i] % 2 == 0 && a[i] < mnOdd){
                ok = 0;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
