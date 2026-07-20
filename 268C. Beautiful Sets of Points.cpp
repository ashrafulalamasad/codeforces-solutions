#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    ll mn = min(n, m);
    ll k = mn + 1;
    cout << k << endl;
    for (ll i = 0; i <= mn; i++) {
        cout << i << " " << (m - i) << endl;
    }
    return 0;
}
