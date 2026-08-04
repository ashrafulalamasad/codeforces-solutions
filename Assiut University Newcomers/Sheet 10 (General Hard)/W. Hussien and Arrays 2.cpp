#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> mn(n), mx(n); mn[0] = a[0];
    for(ll i = 1; i < n; i++) mn[i] = min(mn[i - 1], a[i]);
    mx[n - 1] = a[n - 1];
    for(ll j = n - 2; j >= 0; j--) mx[j] = max(mx[j + 1], a[j]);
    ll i = 0, j = 0, ans = 0;
    while(i < n && j < n){
        if(mn[i] <= mx[j]){
            ans = max(ans, j - i);
            j++;
        }else{
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
