#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, cur = 0; string s; cin >> n >> k >> s;
        for(ll i = 0; i < k; i++){
            if(s[i] == 'W') cur++;
        }
        ll ans = cur;
        for(ll i = k; i < n; i++){
            if(s[i] == 'W') cur++;
            if(s[i - k] == 'W') cur--;
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
