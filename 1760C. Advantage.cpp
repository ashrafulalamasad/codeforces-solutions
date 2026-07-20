#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> arr(n), arr2(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        sort(arr2.begin(), arr2.end());
        ll mx1 = arr2[n-1];
        ll mx2 = arr2[n-2];
        for(ll i=0; i<n; i++){
            if(arr[i] == mx1){
                cout << arr[i] - mx2 << " ";
            }
            else{
                cout << arr[i] - mx1 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
