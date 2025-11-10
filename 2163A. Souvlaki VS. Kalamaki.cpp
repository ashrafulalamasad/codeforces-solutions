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
        for(ll i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        bool ok = true;
        for(ll i = 1; i + 1 < n; i += 2){
            if(arr[i] != arr[i + 1]){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
