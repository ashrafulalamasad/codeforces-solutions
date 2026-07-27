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
        ll mn = LLONG_MAX;
        for(ll i = 0; i < n - 1; i++){
            for(ll j = i + 1; j < n; j++){
                mn = min(mn, arr[i] + arr[j] + j - i);
            }
        }
        cout << mn << endl;
    }
    return 0;
}
