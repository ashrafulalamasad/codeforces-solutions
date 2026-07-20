#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    vector<string> powers;
    string p = "1";
    while(p.size() <= 25){
        powers.push_back(p);
        ll carry = 0;
        for(ll i = p.size() - 1; i >= 0; --i){
            ll d = (p[i] - '0') * 2 + carry;
            p[i] = '0' + d % 10;
            carry = d / 10;
        }
        if(carry) p = "1" + p;
    }
    tc{
        string s; cin >> s;
        ll best = 1e9;
        for(auto &pw : powers){
            ll i = 0, j = 0;
            while(i < s.size() && j < pw.size()){
                if(s[i] == pw[j]) ++j;
                ++i;
            }
            ll moves = s.size() + pw.size() - 2 * j;
            best = min(best, moves);
        }
        cout << best << endl;
    }
    return 0;
}
