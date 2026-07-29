#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void shiftRight(vector<ll>& arr, ll x){
    ll n = arr.size();
    while(x--){
        ll last = arr[n - 1];
        for(ll i = n - 1; i > 0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
}

int main()
{
    fast;
    ll n, x; cin >> n >> x; vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    shiftRight(arr, x);
    for(ll i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
