#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        if(n > 2) cout << "NO" << endl;
        else if(n == 1) cout << "YES" << endl;
        else if(s[0] == s[1]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
