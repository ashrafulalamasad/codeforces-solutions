#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, ans = 0; cin >> n >> m;
        m++;
        for(ll k = 30; k >= 0 && n < m; k--){
            if(((n >> k) & 1) == ((m >> k) & 1)) continue;
            if(((m >> k) & 1) == 1){
                ans |= 1LL << k;
                n |= 1LL << k;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
