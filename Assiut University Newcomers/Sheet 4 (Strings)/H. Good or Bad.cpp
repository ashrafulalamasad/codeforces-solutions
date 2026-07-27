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
        if(s.find("010") != string::npos || s.find("101") != string::npos) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
    return 0;
}
