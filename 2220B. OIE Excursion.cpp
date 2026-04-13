#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        ll maxr = 0, curr = 0, prev_r = -1;
        for(ll i = 0; i < n; i++){
            ll aa; cin >> aa;
            ll rr = (aa == 0 ? 0LL : m - aa);
            if(i == 0){
                prev_r = rr;
                curr = 1;
                maxr = 1;
                continue;
            }
            if(rr == prev_r){
                curr++;
                maxr = max(maxr, curr);
            }else{
                curr = 1;
                prev_r = rr;
            }
        }
        if((ll)maxr > m - 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}
