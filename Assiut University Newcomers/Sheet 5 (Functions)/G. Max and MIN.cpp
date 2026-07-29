#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void printMinMax(vector<ll> arr){
    ll minVal = *min_element(arr.begin(), arr.end());
    ll maxVal = *max_element(arr.begin(), arr.end());
    cout << minVal << " " << maxVal << endl;
}

int main()
{
    fast;
    ll n; cin >> n; vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    printMinMax(arr);
    return 0;
}
