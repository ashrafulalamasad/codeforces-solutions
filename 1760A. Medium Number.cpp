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
        if((a > b && a < c) || (a < b && a > c)){
            cout << a << endl;
        }
        else if((b > a && b < c) || (b < a && b > c)){
            cout << b << endl;
        }
        else{
            cout << c << endl;
        }
    }
    return 0;
}
