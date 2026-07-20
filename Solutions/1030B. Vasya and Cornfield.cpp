#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, d; cin >> n >> d;
    ll m; cin >> m;
    while(m--){
        ll x, y; cin >> x >> y;
        if(x + y >= d && x + y <= 2*n - d && x - y >= -d && x - y <= d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
