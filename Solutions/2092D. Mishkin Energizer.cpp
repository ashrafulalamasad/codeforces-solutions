#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, same = 1; string s; cin >> n >> s;
        for(ll i = 1; i < n; i++){
            if(s[i] != s[0]) same = 0;
        }
        if(same == 1) cout << -1 << endl;
        else{
            vector<ll> ans;
            ll cntL = 0, cntI = 0, cntT = 0;
            for(ll i = 0; i < n; i++){
                if(s[i] == 'L') cntL = cntL + 1;
                else if(s[i] == 'I') cntI = cntI + 1;
                else cntT = cntT + 1;
            }
            while(cntL != cntI || cntI != cntT){
                ll mn = min(cntL, min(cntI, cntT));
                ll mx = max(cntL, max(cntI, cntT));
                ll sz = s.size();
                auto add = [&](ll target){
                    for(ll i = 0; i + 1 < sz; i++){
                        if(s[i] == s[i + 1]) continue;
                        char x = s[i] ^ s[i + 1] ^ 'L' ^ 'I' ^ 'T';
                        ll cntx = x == 'L' ? cntL : x == 'I' ? cntI : cntT;
                        if(cntx != target) continue;
                        if(x == 'L') cntL++;
                        else if(x == 'I') cntI++;
                        else cntT++;
                        s.insert(i + 1, 1, x);
                        ans.push_back(i);
                        return true;
                    }
                    return false;
                };
                if(add(mn)) continue;
                add(mx);
            }
            ll m = ans.size();
            cout << m << endl;
            for(ll i = 0; i < m; i++) cout << ans[i] + 1 << endl;
        }
    }
    return 0;
}
