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
        ll ans = LLONG_MAX;
        for(ll c = 0; c < 2; c++){
            char ch = 'a' + c;
            vector<ll> dd;
            ll idx = 0;
            for(ll i = 0; i < n; i++){
                if(s[i] == ch){
                    dd.push_back(i - idx);
                    idx++;
                }
            }
            if(dd.empty()) continue;
            sort(dd.begin(), dd.end());
            ll med = dd[dd.size() / 2], cur = 0;
            for(ll i = 0; i < (ll)dd.size(); i++) cur += abs(dd[i] - med);
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
