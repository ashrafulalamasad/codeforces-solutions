#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string s, t; cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        (s == t) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
