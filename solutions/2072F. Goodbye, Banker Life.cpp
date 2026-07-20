#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> arr(n, 0);
        for(ll i = 0; i < n; ++i){
            if((i & (n - 1)) == i){
                arr[i] = k;
            }
        }
        for(ll i = 0; i < n; ++i){
            cout << arr[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
