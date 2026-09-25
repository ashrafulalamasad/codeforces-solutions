#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string normalize(const string& v){
    ll cnt = 0;
    while(cnt < (ll)v.size() && v[cnt] == '0') cnt++;
    if(cnt == (ll)v.size()) return "0";
    return v.substr(cnt);
}

string bitOr(const string& a, const string& b){
    ll sz = max(a.size(), b.size());
    string ans(sz, '0');
    for(ll i = 0; i < (ll)a.size(); i++){
        if(a[i] == '1') ans[i + sz - (ll)a.size()] = '1';
    }
    for(ll i = 0; i < (ll)b.size(); i++){
        if(b[i] == '1') ans[i + sz - (ll)b.size()] = '1';
    }
    return normalize(ans);
}

bool better(const string& a, const string& b){
    if(a.size() != b.size()) return a.size() > b.size();
    return a > b;
}

int main()
{
    fast;
    ll n; cin >> n;
    string s; cin >> s;
    string ans = bitOr(s, s);
    ll pos1 = s.find('1');
    if(pos1 != string::npos){
        ll pos2 = s.find('0', pos1);
        if(pos2 != string::npos){
            ll cur = pos1, notNeeded = 0;
            while(true){
                if(cur == n || (s[cur] == '1' && cur > pos2)) break;
                string nw = bitOr(s, s.substr(pos1, n - pos1 - notNeeded));
                if(better(nw, ans)) ans = nw;
                cur++;
                notNeeded++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
