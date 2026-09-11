#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n;
        string s, t; cin >> s >> t;
        for(ll j = 0; j < n; j++){
            if(t[j] == '0') continue;
            if(s[j] == '0'){
                ans++;
            }else if(j > 0 && s[j - 1] == '1'){
                ans++;
                s[j - 1] = '0';
            }else if(j + 1 < n && s[j + 1] == '1'){
                ans++;
                s[j + 1] = '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}
