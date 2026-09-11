#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll m; cin >> m; vector<ll> s(m);
    for(ll i = 0; i < m; i++) cin >> s[i];
    bool ok = true;
    for(ll i = 1; i < m; i++){
        if(s[i] % s[0] != 0) ok = false;
    }
    if(!ok){
        cout << -1 << endl;
        return 0;
    }
    cout << 2 * m - 1 << endl;
    cout << s[0];
    for(ll i = 1; i < m; i++) cout << " " << s[i] << " " << s[0];
    cout << endl;
    return 0;
}
