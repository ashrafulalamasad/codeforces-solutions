#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; ll q; cin >> s >> q; set<ll> pos[26];
    for(ll i = 0; i < (ll)s.size(); i++) pos[s[i] - 'a'].insert(i);
    while(q--){
        ll t; cin >> t;
        if(t == 1){
            ll p; char c; cin >> p >> c;
            p--; pos[s[p] - 'a'].erase(p);
            s[p] = c; pos[c - 'a'].insert(p);
        }else{
            ll l, r; cin >> l >> r;
            l--; r--; ll cnt = 0;
            for(ll i = 0; i < 26; i++){
                auto it = pos[i].lower_bound(l);
                if(it != pos[i].end() && *it <= r) cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
