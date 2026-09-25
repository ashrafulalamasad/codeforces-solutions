#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<bool> bad(n + 1, false);
    for(ll i = 0; i < m; i++){
        ll a, b; cin >> a >> b;
        bad[a] = true;
        bad[b] = true;
    }
    ll c = 1;
    while(c <= n && bad[c]) c++;
    cout << n - 1 << endl;
    for(ll i = 1; i <= n; i++){
        if(i != c) cout << c << " " << i << endl;
    }
    return 0;
}
