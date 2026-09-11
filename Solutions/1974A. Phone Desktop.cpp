#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y; cin >> x >> y;
        ll screens = (y + 1) / 2;
        ll free = screens * 15 - y * 4;
        if(free < x){
            screens += (x - free + 14) / 15;
        }
        cout << screens << endl;
    }
    return 0;
}
