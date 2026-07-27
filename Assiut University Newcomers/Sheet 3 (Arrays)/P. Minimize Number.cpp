#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool allEven(vector<ll> &arr){
    for(ll i = 0; i < arr.size(); i++){
        if(arr[i] % 2 != 0) return false;
    }
    return true;
}

void divideByTwo(vector<ll> &arr){
    for(ll i = 0; i < arr.size(); i++){
        arr[i] /= 2;
    }
}

int main()
{
    fast;
    ll n; cin >> n; vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll count = 0;
    while(true){
        if(!allEven(arr)) break;
        divideByTwo(arr);
        count++;
    }
    cout << count << endl;
    return 0;
}
