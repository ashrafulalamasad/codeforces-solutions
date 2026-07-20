#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll p[101], ans[101];
    for(ll i = 1; i <= n; i++){
        cin >> p[i];
        ans[p[i]] = i;
    }
    for(ll i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
