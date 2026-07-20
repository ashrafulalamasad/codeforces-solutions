#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    string s = "abcd";
    for(ll i = 0; i < n; i++) cout << s[i % 4];
    cout << endl;
    return 0;
}
