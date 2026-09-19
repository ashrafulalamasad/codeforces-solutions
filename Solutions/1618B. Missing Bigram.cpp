#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> s(n - 2);
        for(ll i = 0; i < n - 2; i++) cin >> s[i];
        string ans = s[0];
        for(ll i = 1; i < n - 2; i++){
            if(ans.back() == s[i][0]) ans = ans + s[i][1];
            else ans = ans + s[i];
        }
        if((ll)ans.size() < n) ans = ans + 'a';
        cout << ans << endl;
    }
    return 0;
}
