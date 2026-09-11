#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll l, r, a; cin >> l >> r >> a;
        ll ans = r / a + r % a;
        ll x = r / a * a - 1;
        if(x >= l) ans = max(ans, x / a + x % a);
        cout << ans << endl;
    }
    return 0;
}
