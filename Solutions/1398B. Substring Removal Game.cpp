#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll m = s.size();
        vector<ll> segs; ll cnt = 0;
        for(ll i = 0; i < m; i++){
            if(s[i] == '1') cnt++;
            else{
                if(cnt > 0) segs.push_back(cnt);
                cnt = 0;
            }
        }
        if(cnt > 0) segs.push_back(cnt);
        sort(segs.rbegin(), segs.rend());
        ll ans = 0;
        for(ll i = 0; i < segs.size(); i += 2) ans += segs[i];
        cout << ans << endl;
    }
    return 0;
}
