#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());
    if(k > n){
        cout << -1 << endl;
    }else{
        cout << a[k-1] << " " << 0 << endl;
    }
    return 0;
}
