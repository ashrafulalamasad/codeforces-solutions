#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, f = -1, g = -1; string s; cin >> n >> s;
        for(ll i = 0; i < n; i++){
            if(s[i] == '1' && f < 0) f = i;
            if(s[i] == '0') g = i;
        }
        if(f < 0 || g < 0 || f > g){
            cout << s << endl;
        }else{
            string res = s.substr(0, f) + "0" + s.substr(g + 1);
            cout << res << endl;
        }
    }
    return 0;
}
