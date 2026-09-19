#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> parent(n + 1, 0);
        for(ll v = 2; v <= n; v++){
            ll l = 1;
            while(true){
                cout << "? " << l << " " << v << endl;
                ll m; cin >> m;
                if(m == l) break;
                l = m;
            }
            parent[v] = l;
        }
        cout << "!";
        for(ll v = 2; v <= n; v++) cout << " " << v << " " << parent[v];
        cout << endl;
    }
    return 0;
}
