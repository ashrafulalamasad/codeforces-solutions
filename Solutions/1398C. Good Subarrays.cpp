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
        map<ll, ll> cnt; cnt[0] = 1;
        ll pref = 0, ans = 0;
        for(ll i = 0; i < n; i++){
            pref += s[i] - '0' - 1;
            ans += cnt[pref];
            cnt[pref]++;
        }
        cout << ans << endl;
    }
    return 0;
}
