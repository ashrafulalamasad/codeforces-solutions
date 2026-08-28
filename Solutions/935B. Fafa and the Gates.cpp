#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s;
    ll x = 0, y = 0, ans = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'U') y++;
        else x++;
        if(x == y && i + 1 < n && s[i + 1] == s[i]){
            ans++;
            if(s[i + 1] == 'U') y++;
            else x++;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
