#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n;
    string a, b; cin >> a >> b;
    for(ll i = 0; i < n; i++){
        ll diff = abs(a[i] - b[i]);
        ans += min(diff, 10 - diff);
    }
    cout << ans << endl;
    return 0;
}
