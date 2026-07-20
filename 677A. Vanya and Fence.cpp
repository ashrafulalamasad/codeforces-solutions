#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, h; cin >> n >> h;
    vector<ll> arr(n);
    ll count = 0;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] <= h){
            count += 1;
        }else{
            count += 2;
        }
    }
    cout << count << endl;
    return 0;
}
