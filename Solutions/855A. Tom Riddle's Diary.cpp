#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    set<string> seen;
    while(n--){
        string s; cin >> s;
        cout << (seen.count(s) ? "YES" : "NO") << endl;
        seen.insert(s);
    }
    return 0;
}
