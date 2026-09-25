#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll ab = a * b;
        ll ansx = -1, ansy = -1;
        for(ll x = a + 1; x <= c; x++){
            ll need = ab / __gcd(x, ab);
            ll y = (b / need + 1) * need;
            if(y <= d){
                ansx = x;
                ansy = y;
                break;
            }
        }
        cout << ansx << " " << ansy << endl;
    }
    return 0;
}
