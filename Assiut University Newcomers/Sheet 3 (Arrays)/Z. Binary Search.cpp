#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q; vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    while(q--){
        ll x; cin >> x;
        if(binary_search(arr.begin(), arr.end(), x)){
            cout << "found" << endl;
        }else{
            cout << "not found" << endl;
        }
    }
    return 0;
}
