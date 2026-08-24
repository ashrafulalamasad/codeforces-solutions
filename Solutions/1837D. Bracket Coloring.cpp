#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        ll bal = 0, mn = 0, mx = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '('){
                bal++;
            }else{
                bal--;
            }
            mn = min(mn, bal);
            mx = max(mx, bal);
        }
        if(bal != 0){
            cout << -1 << endl;
            continue;
        }
        vector<ll> ans(n);
        ll k;
        if(mn >= 0 || mx <= 0){
            k = 1;
            for(ll i = 0; i < n; i++){
                ans[i] = 1;
            }
        }else{
            k = 2;
            bal = 0;
            for(ll i = 0; i < n; i++){
                if(s[i] == '('){
                    if(bal >= 0){
                        ans[i] = 1;
                    }else{
                        ans[i] = 2;
                    }
                    bal++;
                }else{
                    if(bal > 0){
                        ans[i] = 1;
                    }else{
                        ans[i] = 2;
                    }
                    bal--;
                }
            }
        }
        cout << k << endl;
        for(ll i = 0; i < n; i++){
            if(i > 0){
                cout << ' ';
            }
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
