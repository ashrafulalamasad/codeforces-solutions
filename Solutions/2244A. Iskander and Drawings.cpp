#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string s; cin >> s;
        ll ans = 0, cur = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '#'){
                cur++;
                ans = max(ans, (cur + 1) / 2);
            }else cur = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
