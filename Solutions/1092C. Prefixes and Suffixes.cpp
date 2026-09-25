#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<string> s(2 * n - 2);
    for(ll i = 0; i < 2 * n - 2; i++) cin >> s[i];
    ll p1 = -1, p2 = -1;
    for(ll i = 0; i < 2 * n - 2; i++){
        if((ll)s[i].size() == n - 1){
            if(p1 == -1) p1 = i;
            else p2 = i;
        }
    }
    for(ll t = 0; t < 2; t++){
        string cand = s[p1] + s[p2][n - 2];
        if(t == 1) cand = s[p2] + s[p1][n - 2];
        vector<char> res(2 * n - 2);
        ll ok = 1;
        for(ll len = 1; len < n; len++){
            ll f1 = -1, f2 = -1;
            for(ll i = 0; i < 2 * n - 2; i++){
                if((ll)s[i].size() == len){
                    if(f1 == -1) f1 = i;
                    else f2 = i;
                }
            }
            string pre = cand.substr(0, len);
            string suf = cand.substr(n - len, len);
            if(s[f1] == pre && s[f2] == suf){
                res[f1] = 'P'; res[f2] = 'S';
            }else if(s[f1] == suf && s[f2] == pre){
                res[f1] = 'S'; res[f2] = 'P';
            }else{
                ok = 0; break;
            }
        }
        if(ok == 1){
            for(ll i = 0; i < 2 * n - 2; i++) cout << res[i];
            cout << endl;
            return 0;
        }
    }
    return 0;
}
