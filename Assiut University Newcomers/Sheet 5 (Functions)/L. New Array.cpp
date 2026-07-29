#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void concatArrays(ll a[], ll b[], ll n){
    for(ll i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    fast;
    ll n; cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    concatArrays(a, b, n);
    return 0;
}
