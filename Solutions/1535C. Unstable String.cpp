#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll n = (ll)s.size();
        ll last0 = -1, last1 = -1, ans = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] != '?'){
                ll bit = (s[i] == '1');
                ll v = bit ^ (i % 2);
                if(v == 0){
                    last0 = i;
                }else{
                    last1 = i;
                }
            }
            ans += i - min(last0, last1);
        }
        cout << ans << endl;
    }
    return 0;
}
