#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    ll sumA = 0, sumB = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        sumA += x;
    }
    for(ll i = 0; i < m; i++){
        ll x; cin >> x;
        sumB += x;
    }
    cout << (sumA == sumB ? "Yes" : "No") << endl;
    return 0;
}
