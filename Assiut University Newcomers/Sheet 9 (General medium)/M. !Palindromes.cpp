#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll n = s.size();
    bool allSame = true;
    for(ll i = 1; i < n; i++) if(s[i] != s[0]) allSame = false;
    if(allSame){ cout << 0 << endl; return 0; }
    bool pal = true;
    for(ll i = 0; i < n / 2; i++) if(s[i] != s[n - 1 - i]) pal = false;
    if(pal) cout << n - 1 << endl;
    else cout << n << endl;
    return 0;
}
