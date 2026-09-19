#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; string t = "";
        for(ll i = 0; i < 20; i++) t += "Yes";
        if(t.find(s) != string::npos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
