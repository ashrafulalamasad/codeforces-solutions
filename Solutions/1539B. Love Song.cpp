#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    vector<ll> pre(n + 1, 0);
    for(ll i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + (s[i - 1] - 'a' + 1);
    }
    while(q--){
        ll l, r; cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}
