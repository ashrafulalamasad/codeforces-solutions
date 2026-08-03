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
        ll n = s.size();
        ll p0 = -1, p1 = -1;
        for(ll i = 0; i < n; i++){
            if(s[i] == '0' && p0 == -1) p0 = i;
            if(s[i] == '1' && p1 == -1) p1 = i;
        }
        string ans;
        for(ll i = 0; i < n; i++){
            if(i == p0 || i == p1) continue;
            ans += s[i];
        }
        cout << ans << endl;
    }
    return 0;
}
