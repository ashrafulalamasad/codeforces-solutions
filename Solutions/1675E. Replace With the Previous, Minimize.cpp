#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; ll rem = k;
        string s; cin >> s; vector<ll> used(26, 0);
        for(ll i = 0; i < n; i++){
            ll cur = s[i] - 'a';
            ll mapped = cur;
            while(mapped > 0 && used[mapped] == 1){
                mapped--;
            }
            if(mapped == 0) continue;
            ll v = mapped;
            while(v > 0 && rem > 0){
                if(used[v] == 0){
                    used[v] = 1;
                    rem--;
                    v--;
                }else{
                    v--;
                }
            }
        }
        for(ll i = 0; i < n; i++){
            ll cur = s[i] - 'a';
            while(cur > 0 && used[cur] == 1){
                cur--;
            }
            s[i] = char('a' + cur);
        }
        cout << s << endl;
    }
    return 0;
}
