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
        ll n = s.size(), pos = -1;
        for(ll i = 0; i + 1 < n; i++) if(s[i] == s[i + 1]) pos = i;
        if(pos == -1){
            if(s[n - 1] != 'a') s = s + 'a';
            else s = s + 'b';
            cout << s << endl;
        }else{
            string ans = "";
            for(ll i = 0; i <= pos; i++) ans = ans + s[i];
            if(s[pos] != 'a') ans = ans + 'a';
            else ans = ans + 'b';
            for(ll i = pos + 1; i < n; i++) ans = ans + s[i];
            cout << ans << endl;
        }
    }
    return 0;
}
