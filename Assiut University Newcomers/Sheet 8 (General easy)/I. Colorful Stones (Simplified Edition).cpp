#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s, t; cin >> s >> t;
    ll pos = 1;
    for(char c : t){
        if(s[pos - 1] == c) pos++;
    }
    cout << pos << endl;
    return 0;
}
