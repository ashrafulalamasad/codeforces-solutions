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
        vector<ll> arr(n);
        bool odd=false, even=false;
        for(ll i=0;i<n;i++){
            cin >> arr[i];
            (arr[i]%2) ? odd = true : even = true;
        }
        if(odd && even){
            sort(arr.begin(), arr.end());
        }
        for(ll i = 0; i < n; i++){
            cout << arr[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}
