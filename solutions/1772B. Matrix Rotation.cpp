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
        if((b > a && d > c && c > a && d > b)||
           (a > c && b > d && d > c && b > a)||
           (c > d && a > b && b > d && a > c)||
           (d > b && c > a && a > b && c > d)){
            cout << "YES" << endl;
           }else{
            cout << "NO" << endl;
           }
    }
    return 0;
}
