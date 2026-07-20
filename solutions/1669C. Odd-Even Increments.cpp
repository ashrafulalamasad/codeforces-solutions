#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool even_pos_same = true;
        for(ll i = 2; i < n; i += 2){
            if(arr[i] % 2 != arr[0] % 2) {
                even_pos_same = false;
                break;
            }
        }
        bool odd_pos_same = true;
        for(ll i = 3; i < n; i += 2){
            if(arr[i] % 2 != arr[1] % 2) {
                odd_pos_same = false;
                break;
            }
        }
        if(even_pos_same && odd_pos_same){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
