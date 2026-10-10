#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, cur = 0, ok = 1; cin >> n;
        vector<ll> b(n), bad(n, 0), diff(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++){
            if(b[i] > 0){
                ll l = i - b[i] + 1;
                if(l < 0) l = 0;
                ll r = i + b[i];
                if(r > n) r = n;
                diff[l]++; diff[r]--;
            }
        }
        for(ll i = 0; i < n; i++){
            cur = cur + diff[i];
            if(cur > 0) bad[i] = 1;
        }
        for(ll i = 0; i < n; i++){
            if(b[i] >= 0){
                ll left = 0;
                if(i - b[i] >= 0 && bad[i - b[i]] == 0) left = 1;
                ll right = 0;
                if(i + b[i] < n && bad[i + b[i]] == 0) right = 1;
                if(left == 0 && right == 0) ok = 0;
            }
        }
        if(ok == 0) cout << -1 << endl; else{
            string s = "";
            for(ll i = 0; i < n; i++){
                if(bad[i] == 1) s = s + "0";
                else s = s + "1";
            }
            cout << s << endl;
        }
    }
    return 0;
}
