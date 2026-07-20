#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n; vector<ll> c(n);
        for(ll i = 0; i < n; ++i) cin >> c[i];
        ll ans = c[0] - 1;
        for(ll i = 1; i < n; ++i){
            if(c[i] > c[i - 1]) ans += c[i] - c[i - 1];
        }
        cout << ans << endl;
    }
    return 0;
}
