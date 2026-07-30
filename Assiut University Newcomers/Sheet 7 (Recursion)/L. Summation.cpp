#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll sum(ll arr[], ll n){
    if(n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    fast;
    ll size; cin >> size;
    ll arr[1000];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << sum(arr, size) << endl;
    return 0;
}
