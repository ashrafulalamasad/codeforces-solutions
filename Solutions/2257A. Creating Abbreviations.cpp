#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        bool have[26] = {};
        string s;
        while(n--){
            cin >> s;
            have[s[0] - 'a'] = 1;
        }
        vector<string> a(m);
        for(auto &x : a) cin >> x;
        vector<bool> done(m);
        ll cnt = 0;
        while(1){
            bool ok = 0;
            for(ll i = 0; i < m; i++){
                if(done[i]) continue;
                bool can = 1;
                for(char c : a[i]){
                    if(!have[c - 'A']) can = 0;
                }
                if(can){
                    done[i] = 1;
                    have[a[i][0] - 'A'] = 1;
                    cnt++;
                    ok = 1;
                }
            }
            if(!ok) break;
        }
        cout << (cnt == m ? "YES\n" : "NO\n");
    }
    return 0;
}
