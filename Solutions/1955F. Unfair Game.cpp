#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll p1, p2, p3, p4; cin >> p1 >> p2 >> p3 >> p4;
        ll even123 = (p1 - p1 % 2) + (p2 - p2 % 2) + (p3 - p3 % 2);
        ll odd123 = 0;
        if(p1 > 0 && p2 > 0 && p3 > 0){
            odd123 = p1 + p2 + p3;
            if(p1 % 2 == 0){
                odd123--;
            }
            if(p2 % 2 == 0){
                odd123--;
            }
            if(p3 % 2 == 0){
                odd123--;
            }
        }
        ll best123 = max(even123, odd123);
        ll best4 = p4 - p4 % 2;
        ll maxSize = best123 + best4;
        cout << maxSize / 2 << endl;
    }
    return 0;
}
