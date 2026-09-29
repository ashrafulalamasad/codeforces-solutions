#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y, k; cin >> x >> y >> k;
        while(k > 0 && x != 1){
            ll steps = y - x % y;
            if(steps > k){
                x += k;
                k = 0;
            }else{
                x += steps;
                k -= steps;
                while(x % y == 0) x /= y;
            }
        }
        if(x == 1) x += k % (y - 1);
        cout << x << endl;
    }
    return 0;
}
