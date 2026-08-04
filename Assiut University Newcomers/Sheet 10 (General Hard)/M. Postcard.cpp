#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; ll k; cin >> s >> k;
    vector<char> ch; vector<ll> typ;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == '?' || s[i] == '*') continue;
        if(i + 1 < s.size() && s[i + 1] == '?'){
            ch.push_back(s[i]);
            typ.push_back(1);
        }else if(i + 1 < s.size() && s[i + 1] == '*'){
            ch.push_back(s[i]);
            typ.push_back(2);
        }else{
            ch.push_back(s[i]);
            typ.push_back(0);
        }
    }
    ll must = 0, opt = 0, star = 0;
    for(ll t : typ){
        if(t == 0) must++;
        else if(t == 1) opt++;
        else star++;
    }
    if(k < must){
        cout << "Impossible" << endl;
        return 0;
    }
    ll need = k - must;
    string ans;
    for(ll i = 0; i < ch.size(); i++){
        if(typ[i] == 0){
            ans += ch[i];
        }else if(typ[i] == 1){
            if(need > 0){
                ans += ch[i];
                need--;
            }
        }else{
            if(need > 0){
                ans += ch[i];
                need--;
                while(need > 0){
                    ans += ch[i];
                    need--;
                }
            }
        }
    }
    if(need > 0) cout << "Impossible" << endl;
    else cout << ans << endl;
    return 0;
}
