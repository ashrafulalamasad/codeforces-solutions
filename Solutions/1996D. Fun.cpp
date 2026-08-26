#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, ans = 0; cin >> n >> x;
        for(ll a = 1; a <= x - 2; a++){
            ll bmax = min((n - a) / (a + 1), x - a - 1);
            for(ll b = 1; b <= bmax; b++){
                ll cmax1 = (n - a * b) / (a + b);
                ll cmax2 = x - a - b;
                ll cmax = min(cmax1, cmax2);
                if(cmax >= 1){
                    ans += cmax;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
