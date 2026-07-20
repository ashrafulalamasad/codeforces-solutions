#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    if(2*n*m % k != 0){
        cout << "NO" << endl;
        return 0;
    }
    ll g = __gcd(2*n, k);
    ll x, y;
    if(g > 1){
        x = 2*n / g;
        y = m / (k / g);
    }else{
        x = n;
        y = 2*m / k;
    }
    cout << "YES" << endl;
    cout << "0 0" << endl;
    cout << x << " 0" << endl;
    cout << "0 " << y << endl;
    return 0;
}
