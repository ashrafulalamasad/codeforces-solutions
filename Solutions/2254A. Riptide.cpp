#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        ll ans = 0;
        while(a != b && b != c && a != c){
            ll mx = max({a, b, c});
            ll mn = min({a, b, c});
            if(a == mx) a--;
            else if(b == mx) b--;
            else c--;
            if(a == mn) a++;
            else if(b == mn) b++;
            else c++;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
