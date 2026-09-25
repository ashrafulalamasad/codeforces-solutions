#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string s; cin >> s;
        vector<ll> nx(n + 2, n + 1), suf(n + 2, 0);
        for(ll i = n - 1; i >= 0; i--){
            if(s[i] == '(') nx[i] = i;
            else nx[i] = nx[i + 1];
            suf[i] = suf[i + 1] + (s[i] == '(');
        }
        ll ans = -1;
        for(ll i = 0; i < n; i++){
            if(s[i] == ')' && nx[i] <= n){
                ll gap = nx[i] - i;
                if(suf[nx[i] + 1] >= gap) ans = max(ans, n - 2 * gap);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
