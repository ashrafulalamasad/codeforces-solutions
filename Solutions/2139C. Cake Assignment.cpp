#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k, x; cin >> k >> x;
        ll kk = 1LL << k;
        ll y = 2 * kk - x;
        vector<ll> ans;
        while(x != kk){
            if(x > y){
                ans.push_back(2);
                x -= y;
                y *= 2;
            }else{
                ans.push_back(1);
                y -= x;
                x *= 2;
            }
        }
        ll m = (ll)ans.size();
        cout << m << endl;
        for(ll i = m - 1; i >= 0; i--) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
