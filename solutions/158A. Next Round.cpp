#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, count = 0; cin >> n >> k;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++) cin >> arr[i];
    ll k_score = arr[k-1];
    for(ll i=0; i<n; i++){
        if(arr[i]>=k_score && arr[i]>0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
