#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> arr(n);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0) arr[i] = 2;
        else if(arr[i] > 0) arr[i] = 1;
    }
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
