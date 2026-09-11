#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t; cin >> s >> t;
        ll ls = s.length(), lt = t.length();
        ll g = gcd(ls, lt);
        ll lcmLen = ls / g * lt;
        string rs = "", rt = "";
        for(ll i = 0; i < lcmLen / ls; i++) rs += s;
        for(ll i = 0; i < lcmLen / lt; i++) rt += t;
        if(rs == rt){
            cout << rs << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
