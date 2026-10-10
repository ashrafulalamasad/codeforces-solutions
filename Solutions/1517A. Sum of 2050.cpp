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
        if(n % 2050 != 0) cout << -1 << endl;
        else{
            n /= 2050;
            ll ans = 0;
            while(n > 0){
                ans += n % 10;
                n /= 10;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
