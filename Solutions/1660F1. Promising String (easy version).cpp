#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; string s; cin >> n >> s;
        for(ll l = 0; l < n; l++){
            ll p = 0, m = 0, z = 0, run = 0;
            for(ll r = l; r < n; r++){
                if(s[r] == '-'){
                    run = (r > l && s[r - 1] == '-') ? run + 1 : 1;
                    if(run % 2 == 1) z++;
                    else z--;
                    m++;
                }else{
                    p++;
                    run = 0;
                }
                ll d = m - p;
                if(d >= 0 && d % 3 == 0 && 3 * (m - z) >= 2 * d) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
