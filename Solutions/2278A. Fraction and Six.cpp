#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        string s, t; cin >> s >> t;
        t += "six";
        vector<ll> a(26), b(26);
        for(char c : s) a[c-'a']++;
        for(char c : t) b[c-'a']++;
        if(a == b) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
    return 0;
}
