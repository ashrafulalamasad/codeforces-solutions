#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll x; cin >> x;
    for(ll i = 0; i < n; i++){
        if(arr[i] == x){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
