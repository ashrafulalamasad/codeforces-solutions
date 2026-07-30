#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, sum = 0; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++){ cin >> a[i]; sum += a[i]; }
    sort(a.rbegin(), a.rend());
    ll cur = 0;
    for(ll i = 0; i < n; i++){
        cur += a[i];
        if(cur > sum - cur){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
