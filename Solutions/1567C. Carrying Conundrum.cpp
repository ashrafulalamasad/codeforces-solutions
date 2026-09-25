#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, pos = 0, n0 = 0, n1 = 0; cin >> n;
        ll tmp = n, p0 = 1, p1 = 1;
        while(tmp > 0){
            ll d = tmp % 10;
            if(pos % 2 == 0){
                n0 = n0 + d * p0;
                p0 = p0 * 10;
            }else{
                n1 = n1 + d * p1;
                p1 = p1 * 10;
            }
            tmp = tmp / 10;
            pos = pos + 1;
        }
        cout << (n0 + 1) * (n1 + 1) - 2 << endl;
    }
    return 0;
}
