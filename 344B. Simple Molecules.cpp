#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c; cin >> a >> b >> c;
    ll x = a + b - c;
    ll y = b + c - a;
    ll z = a + c - b;
    if(x % 2 != 0 || y % 2 != 0 || z % 2 != 0 || x < 0 || y < 0 || z < 0){
        cout << "Impossible" << endl;
    }else{
        cout << x / 2 << " " << y / 2 << " " << z / 2 << endl;
    }
    return 0;
}
