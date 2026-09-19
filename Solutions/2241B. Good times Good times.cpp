#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x; cin >> x;
        ll tmp = x, d = 0;
        while(tmp > 0){
            d++;
            tmp = tmp / 10;
        }
        ll p = 1;
        for(ll i = 0; i < d; i++) p = p * 10;
        ll y = p + 1;
        cout << y << endl;
    }
    return 0;
}
