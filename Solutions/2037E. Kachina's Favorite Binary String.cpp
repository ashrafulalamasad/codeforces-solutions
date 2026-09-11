#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, pos = 2; cin >> n; vector<ll> p(n + 1, 0);
        for(ll i = 2; i <= n; i++){
            cout << "? 1 " << i << endl;
            cin >> p[i];
            if(p[i] == -1){
                return 0;
            }
        }
        if(p[n] == 0){
            cout << "! IMPOSSIBLE" << endl;
            continue;
        }
        while(pos <= n && p[pos] == 0){
            pos++;
        }
        ll c = p[pos] - p[pos - 1];
        string ans(n, '0');
        ll ones = pos - 1 - c;
        for(ll i = 0; i < ones; i++){
            ans[i] = '1';
        }
        ans[pos - 1] = '1';
        for(ll i = pos + 1; i <= n; i++){
            if(p[i] == p[i - 1]){
                ans[i - 1] = '0';
            }else{
                ans[i - 1] = '1';
            }
        }
        cout << "! " << ans << endl;
    }
    return 0;
}
