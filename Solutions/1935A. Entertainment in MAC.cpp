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
        string s; cin >> s;
        string r = s;
        reverse(r.begin(), r.end());
        if(r + s < s) cout << r + s << endl;
        else cout << s << endl;
    }
    return 0;
}
