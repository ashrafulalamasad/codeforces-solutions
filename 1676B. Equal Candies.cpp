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
        ll ans = 0, mn = *min_element(arr.begin(), arr.end());
        for(ll i = 0; i < n; i++){
            ans += arr[i] - mn;
        }
        cout << ans << endl;
    }
    return 0;
}
