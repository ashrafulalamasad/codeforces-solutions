#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s; ll n = s.size();
    vector<ll> pre(n + 1, 0);
    for(ll i = 0; i < n; i++) pre[i + 1] = pre[i] + (s[i] == 'Q');
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'A') ans += pre[i] * (pre[n] - pre[i + 1]);
    }
    cout << ans << endl;
    return 0;
}
