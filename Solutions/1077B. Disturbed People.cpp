#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 1; i < n - 1; i++){
        if(a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1){
            ans++;
            a[i + 1] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
