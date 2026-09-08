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
        vector<ll> seen(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            seen[x]++;
        }
        ll miss = 0;
        for(ll x = 0; x < k; x++){
            if(seen[x] == 0){
                miss++;
            }
        }
        cout << max(miss, seen[k]) << endl;
    }
    return 0;
}
