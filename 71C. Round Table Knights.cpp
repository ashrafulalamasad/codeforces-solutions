#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll m=3; m<=n; m++){
        if(n % m != 0) continue;
        ll s = n / m;
        for(ll start=0; start<s; start++){
            bool ok = true;
            for(ll k=0; k<m; k++){
                if(a[(start + k*s) % n] != 1){ ok = false; break; }
            }
            if(ok){ cout << "YES" << endl; return 0; }
        }
    }
    cout << "NO" << endl;
    return 0;
}
