#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> c(n),d(n);
    for(ll i=0; i<n; i++) cin >> c[i] >> d[i];
    ll L = LLONG_MIN/2, U = LLONG_MAX/2, pref = 0;
    for(ll i=0; i<n; i++){
        if(d[i] == 1){
            L = max(L, 1900LL - pref);
        }else{
            U = min(U, 1899LL - pref);
        }
        pref += c[i];
    }
    if(L > U){
        cout<<"Impossible\n";
    }else if(U == LLONG_MAX/2){
        cout<<"Infinity\n";
    }else{
        cout<< (U + pref) <<'\n';
    }
    return 0;
}
