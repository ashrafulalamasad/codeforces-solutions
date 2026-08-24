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
        ll sum = 0, mn = 1e18, sec = 1e18;
        while(n--){
            ll m; cin >> m;
            ll x, a = 1e18, b = 1e18;
            while(m--){
                cin >> x;
                if(x < a) b = a, a = x;
                else if(x < b) b = x;
            }
            sum += b;
            mn = min(mn, a);
            sec = min(sec, b);
        }
        cout << sum - sec + mn << endl;
    }
    return 0;
}
