#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, d; cin >> n >> d; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll res = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i != j && abs(a[i] - a[j]) <= d) res++;
        }
    }
    cout << res << endl;
    return 0;
}
