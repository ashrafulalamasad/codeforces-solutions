#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; bool found = false;
        for(ll i = 1; i < s.size(); i++){
            if(s[i] == '0') continue;
            ll a = stoll(s.substr(0, i));
            ll b = stoll(s.substr(i));
            if(b > a){
                cout << a << " " << b << endl;
                found = true; break;
            }
        }
        if(!found) cout << -1 << endl;
    }
    return 0;
}
