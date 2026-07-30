#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll findMax(ll arr[], ll idx){
    if(idx == 0) return arr[0];
    return max(arr[idx], findMax(arr, idx - 1));
}

int main()
{
    fast;
    ll size; cin >> size;
    ll arr[1000];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << findMax(arr, size - 1) << endl;
    return 0;
}
