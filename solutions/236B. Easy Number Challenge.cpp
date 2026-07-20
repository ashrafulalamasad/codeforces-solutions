#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MOD = 1073741824;

int main(){
    fast;
    ll a, b, c; cin >> a >> b >> c;
    vector<ll> d(1000001, 0);
    for(ll i=1; i<=1000000; i++){
        for(ll j=i; j<=1000000; j+=i){
            d[j]++;
        }
    }
    ll ans = 0;
    for(ll i=1; i<=a; i++){
        for(ll j=1; j<=b; j++){
            for(ll k=1; k<=c; k++){
                ans = (ans + d[i*j*k]) % MOD;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
