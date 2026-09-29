#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; bool found = false;
        for(ll x = 1; x <= 20 && !found; x++){
            for(ll y = 1; y <= 20 && !found; y++){
                if(x == y || x + y >= n) continue;
                ll z = n - x - y;
                if(z == x || z == y) continue;
                if(x % 3 == 0 || y % 3 == 0 || z % 3 == 0) continue;
                cout << "YES" << endl;
                cout << x << " " << y << " " << z << endl;
                found = true;
            }
        }
        if(!found) cout << "NO" << endl;
    }
    return 0;
}
