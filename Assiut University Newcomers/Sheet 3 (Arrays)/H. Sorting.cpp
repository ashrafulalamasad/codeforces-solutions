#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void bubbleSort(vector<ll>& arr){
    ll n = arr.size();
    for(ll i = 0; i < n - 1; i++){
        bool swapped = false;
        for(ll j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main()
{
    fast;
    ll n; cin >> n; vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    bubbleSort(arr);
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
