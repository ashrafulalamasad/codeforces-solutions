#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a; cin >> a;
    while(true){
        ll s = 0, x = a;
        while(x > 0){
            s = s + x % 10;
            x = x / 10;
        }
        if(s % 4 == 0) break;
        a++;
    }
    cout << a << endl;
    return 0;
}
