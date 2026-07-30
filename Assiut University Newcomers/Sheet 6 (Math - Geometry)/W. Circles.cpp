#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    ll A = (x1+x2-x3-x4)*(x1+x2-x3-x4) + (y1+y2-y3-y4)*(y1+y2-y3-y4);
    ll B = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    ll C = (x3-x4)*(x3-x4) + (y3-y4)*(y3-y4);
    ll diff = A - B - C;
    if(diff <= 0){
        cout << "YES" << endl;
    }else{
        long double lhs = (long double)diff * diff;
        long double rhs = (long double)4 * B * C;
        if(lhs <= rhs) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
