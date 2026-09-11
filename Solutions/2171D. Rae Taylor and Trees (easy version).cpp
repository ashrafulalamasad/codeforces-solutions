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
        ll mn = n + 1; bool ok = true;
        for(ll i = 1; i <= n; i++){
            ll x; cin >> x;
            mn = min(mn, x);
            if(i < n && mn > n - i){
                ok = false;
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
