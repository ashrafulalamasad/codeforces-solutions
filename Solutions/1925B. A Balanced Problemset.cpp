#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, n, ans = 1; cin >> x >> n;
        for(ll i = 1; i * i <= x; i++){
            if(x % i == 0){
                ll d1 = i;
                ll d2 = x / i;
                if(d1 * n <= x) ans = max(ans, d1);
                if(d2 * n <= x) ans = max(ans, d2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
