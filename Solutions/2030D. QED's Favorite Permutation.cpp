#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> p(n), pos(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) p[i]--;
        for(ll i = 0; i < n; i++) pos[p[i]] = i;
        vector<ll> diff(n + 1, 0);
        for(ll i = 0; i < n; i++){
            diff[min(i, pos[i])]++;
            diff[max(i, pos[i])]--;
        }
        for(ll i = 1; i < n; i++) diff[i] += diff[i - 1];
        string s; cin >> s; set<ll> bad;
        for(ll i = 0; i < n - 1; i++){
            if(s[i] == 'L' && s[i + 1] == 'R' && diff[i] != 0) bad.insert(i);
        }
        for(ll i = 0; i < q; i++){
            ll x; cin >> x; x--;
            if(s[x] == 'L') s[x] = 'R';
            else s[x] = 'L';
            if(s[x - 1] == 'L' && s[x] == 'R' && diff[x - 1] != 0) bad.insert(x - 1);
            else bad.erase(x - 1);
            if(s[x] == 'L' && s[x + 1] == 'R' && diff[x] != 0) bad.insert(x);
            else bad.erase(x);
            if(bad.empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
