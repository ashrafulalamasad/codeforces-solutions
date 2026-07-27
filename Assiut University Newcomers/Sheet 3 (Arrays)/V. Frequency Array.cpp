#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<ll> freq(m+1, 0);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        freq[x]++;
    }
    for(ll i = 1; i <= m; i++){
        cout << freq[i] << endl;
    }
    return 0;
}
