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
        ll odd = 0, even = 0;
        for(ll i = 0; i < 2 * n; i++){
            ll x; cin >> x;
            if(x % 2 == 0) even++;
            else odd++;
        }
        cout << (odd == n && even == n ? "Yes" : "No") << endl;
    }
    return 0;
}
