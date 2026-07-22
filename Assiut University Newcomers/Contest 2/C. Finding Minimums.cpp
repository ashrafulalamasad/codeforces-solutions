#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i += k){
        ll mn = a[i];
        for(ll j = i; j < min(i + k, n); j++){
            if(a[j] < mn) mn = a[j];
        }
        cout << mn << ' ';
    }
    cout << endl;
    return 0;
}
