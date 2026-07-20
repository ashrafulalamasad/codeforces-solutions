#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll curr = 1, mx = 1;
    for(ll i = 1; i < n; i++){
        if(a[i] >= a[i-1]){
            curr++;
        } 
        else{
            curr = 1;
        }
        mx = max(mx, curr);
    }
    cout << mx << endl;
    return 0;
}
