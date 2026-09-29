#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; ll x; cin >> s >> x;
        ll n = s.size(); string w(n, '1');
        for(ll i = 0; i < n; i++){
            if(s[i] == '0'){
                if(i - x >= 0) w[i - x] = '0';
                if(i + x < n) w[i + x] = '0';
            }
        }
        bool ok = true;
        for(ll i = 0; i < n; i++){
            char c = '0';
            if(i - x >= 0 && w[i - x] == '1') c = '1';
            if(i + x < n && w[i + x] == '1') c = '1';
            if(c != s[i]) ok = false;
        }
        if(ok) cout << w << endl;
        else cout << -1 << endl;
    }
    return 0;
}
