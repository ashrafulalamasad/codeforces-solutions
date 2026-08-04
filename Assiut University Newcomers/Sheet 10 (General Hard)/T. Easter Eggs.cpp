#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    string s = "ROYGBIV";
    string t = "GBIV";
    for(ll i = 7; i < n; i++) s += t[(i - 7) % 4];
    cout << s << endl;
    return 0;
}
