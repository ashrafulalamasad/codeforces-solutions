#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll ans = -1;
        for(ll d = 0; d <= 40; d++){
            ll lo = n >> d;
            ll hi = (n + (1LL << d) - 1) >> d;
            if(lo <= k && k <= hi){
                ans = d;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
