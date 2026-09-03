#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> seen(n + 1, 0);
        for(ll i = 0; i < 2 * n; i++){
            ll x; cin >> x;
            if(!seen[x]){
                seen[x] = 1;
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
