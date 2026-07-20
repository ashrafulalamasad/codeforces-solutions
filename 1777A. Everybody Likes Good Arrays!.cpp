#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, op = 0; cin >> n; vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];
        for(ll i = 0; i < n - 1; i++){
            if(arr[i] % 2 == arr[i + 1] % 2){
                op++;
            }
        }
        cout << op << endl;
    }
    return 0;
}
