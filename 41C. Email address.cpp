#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll n = s.size();
    string best = "";
    for(ll at = 0; at + 1 < n; at++){
        if(s[at] != 'a' || s[at + 1] != 't') continue;
        vector<ll> di;
        for(ll i = 0; i + 2 < n; i++){
            if(at >= i && at <= i + 2) continue;
            if(s.substr(i, 3) == "dot") di.push_back(i);
        }
        vector<bool> rep(n, false);
        for(ll i = 0; i < (ll)di.size(); i++) rep[di[i]] = true;
        string r = "";
        for(ll i = 0; i < n; i++){
            if(i == at){ r += '@'; i++; continue; }
            if(rep[i]){ r += '.'; i += 2; continue; }
            r += s[i];
        }
        if(r[0] == '.') rep[di.front()] = false;
        if(r.back() == '.') rep[di.back()] = false;
        r = "";
        for(ll i = 0; i < n; i++){
            if(i == at){ r += '@'; i++; continue; }
            if(rep[i]){ r += '.'; i += 2; continue; }
            r += s[i];
        }
        ll len = r.size();
        if(len >= 2 && r[0] != '.' && r[0] != '@' && r.back() != '.' && r.back() != '@'){
            if(best == "" || r < best) best = r;
        }
    }
    cout << best << endl;
    return 0;
}
