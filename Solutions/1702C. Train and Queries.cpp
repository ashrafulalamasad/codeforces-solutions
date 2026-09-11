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
        map<ll, ll> first, last;
        for(ll i = 0; i < n; i++){
            ll u; cin >> u;
            if(!first.count(u)) first[u] = i;
            last[u] = i;
        }
        for(ll j = 0; j < k; j++){
            ll a, b; cin >> a >> b;
            if(first.count(a) && first.count(b) && first[a] < last[b]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
