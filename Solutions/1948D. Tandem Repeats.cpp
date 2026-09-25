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
        ll ans = 0;
        for(ll d = 1; d <= n / 2; d++){
            ll cnt = 0;
            for(ll i = 0; i + d < n; i++){
                if(s[i] == '?' || s[i + d] == '?' || s[i] == s[i + d]) cnt++;
                else cnt = 0;
                if(cnt >= d){
                    ans = max(ans, 2 * d);
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
