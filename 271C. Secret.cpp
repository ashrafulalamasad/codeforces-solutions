#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    if(n < 3 * k){
        cout << -1 << endl;
        return 0;
    }
    vector<ll> ans(n);
    for(ll i = 0; i < k; i++) ans[i] = i + 1;
    for(ll i = k; i < 2 * k; i++) ans[i] = i - k + 1;
    for(ll i = 2 * k; i < 3 * k; i++) ans[i] = (i - 2 * k + 1) % k + 1;
    ll cur = 1;
    for(ll i = 3 * k; i < n; i++){
        ans[i] = (cur - 1) % k + 1;
        cur++;
    }
    for(ll i = 0; i < n; i++) cout << ans[i] << (i < n - 1 ? " " : "");
    cout << endl;
    return 0;
}
