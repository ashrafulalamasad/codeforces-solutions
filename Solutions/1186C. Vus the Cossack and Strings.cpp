#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string a, b; cin >> a >> b;
    ll n = a.size(), m = b.size();
    ll ones = count(b.begin(), b.end(), '1');
    vector<ll> pre(n + 1, 0);
    for(ll i = 0; i < n; i++){
        pre[i + 1] = pre[i] + (a[i] == '1');
    }
    ll ans = 0;
    for(ll i = 0; i + m <= n; i++){
        ll cur = pre[i + m] - pre[i];
        if((ones + cur) % 2 == 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
