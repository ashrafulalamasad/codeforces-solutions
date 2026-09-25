#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t; cin >> s >> t; ll l = 0;
        while(l < (ll)s.size() && l < (ll)t.size() && s[l] == t[l]) l++;
        if(l == 0) cout << (ll)s.size() + (ll)t.size() << endl;
        else cout << (ll)s.size() + (ll)t.size() - l + 1 << endl;
    }
    return 0;
}
