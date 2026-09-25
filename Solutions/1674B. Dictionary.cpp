#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll x = s[0] - 'a', y = s[1] - 'a';
        ll ans = x * 25 + y + 1;
        if(y > x) ans--;
        cout << ans << endl;
    }
    return 0;
}
