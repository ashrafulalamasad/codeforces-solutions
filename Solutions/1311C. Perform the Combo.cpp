#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; string s; cin >> s;
        vector<ll> f(n + 2, 0), cnt(26, 0);
        for(ll i = 0; i < m; i++){
            ll p; cin >> p; f[p]++;
        }
        ll suf = 0;
        for(ll i = n; i >= 1; i--){
            suf += f[i];
            cnt[s[i - 1] - 'a'] += suf + 1;
        }
        for(ll i = 0; i < 26; i++) cout << cnt[i] << " ";
        cout << endl;
    }
    return 0;
}
