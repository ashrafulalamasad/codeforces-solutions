#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        ll d = abs(a - b);
        ll n = 2 * d;
        if(a > n || b > n || c > n){
            cout << -1 << endl;
            continue;
        }
        ll ans = c + d;
        if(ans > n) ans -= n;
        cout << ans << endl;
    }
    return 0;
}
