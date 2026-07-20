#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c, ans = 0; cin >> n >> c;
        vector<ll> arr(n), freq(101, 0);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        for(ll i = 1; i <= 100; i++){
            ans += min(freq[i], c);
        }
        cout << ans << endl;
    }
    return 0;
}
