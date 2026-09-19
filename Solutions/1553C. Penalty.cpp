#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll ans = 10;
        for(ll mask = 0; mask < (1 << 10); mask++){
            bool bad = false;
            for(ll i = 0; i < 10; i++){
                if(s[i] != '?'){
                    ll bit = (mask >> i) & 1;
                    if(bit != s[i] - '0') bad = true;
                }
            }
            if(bad) continue;
            ll s0 = 0, s1 = 0, cur = 10;
            for(ll i = 0; i < 10; i++){
                ll bit = (mask >> i) & 1;
                if(i % 2 == 0) s0 = s0 + bit;
                else s1 = s1 + bit;
                ll played0 = i / 2 + 1;
                ll played1 = (i + 1) / 2;
                ll rem0 = 5 - played0;
                ll rem1 = 5 - played1;
                if(s0 > s1 + rem1 || s1 > s0 + rem0){
                    cur = i + 1; break;
                }
            }
            if(cur < ans) ans = cur;
        }
        cout << ans << endl;
    }
    return 0;
}
