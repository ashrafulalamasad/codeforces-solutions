#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll arr[1000];

void printEven(ll arr[], ll size, ll idx){
    if(idx >= size) return;
    printEven(arr, size, idx + 2);
    cout << arr[idx];
    if(idx > 0) cout << " ";
}

int main()
{
    fast;
    ll size; cin >> size;
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    printEven(arr, size, 0);
    cout << endl;
    return 0;
}
