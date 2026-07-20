#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n), pos(n+1);
        for(ll i = 0; i < n; i++){
            cin >> p[i];
            pos[p[i]] = i;
        }
        ll ans = 0;
        for(ll i = 1; i < n; i++){
            if(pos[i] > pos[i+1]){
                ans = max(ans, min(i, n-i));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
