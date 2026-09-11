#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        string s; cin >> s; ll n = s.size(), cnt = 0;
        for(ll i = 0; i + 3 < n; i++){
            if(s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0'){
                cnt++;
            }
        }
        ll q; cin >> q;
        while(q--){
            ll idx, v; cin >> idx >> v;
            idx--;
            char c = (v == 0 ? '0' : '1');
            if(s[idx] != c){
                ll lo = max(0LL, idx - 3);
                ll hi = min(n - 4, idx);
                for(ll i = lo; i <= hi; i++){
                    if(s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0'){
                        cnt--;
                    }
                }
                s[idx] = c;
                for(ll i = lo; i <= hi; i++){
                    if(s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0'){
                        cnt++;
                    }
                }
            }
            if(cnt > 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
