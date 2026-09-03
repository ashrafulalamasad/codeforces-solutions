#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<bool> occ(n + 2, false);
        bool ok = true;
        for(ll i = 0; i < n; i++){
            if(i > 0 && !occ[a[i] - 1] && !occ[a[i] + 1]) ok = false;
            occ[a[i]] = true;
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
