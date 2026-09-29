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
        string w;
        for(ll i = 0; i < n; i++) w += s[2 * i];
        cout << w << endl;
    }
    return 0;
}
