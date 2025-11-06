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
        for(ll i = 0; i < n; i++) cin >> arr[i];
        bool found = false; ll x, y;
        for(ll i = 0; i < n && !found; i++){
            for(ll j = i + 1; j < n && !found; j++){
                if(arr[j] % arr[i] % 2 == 0){
                    x = arr[i];
                    y = arr[j];
                    found = true;
                }
            }
        }
        if(found) cout << x << " " << y << "\n";
        else cout << "-1\n";
    }
    return 0;
}
