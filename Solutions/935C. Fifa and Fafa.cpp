#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    long double r, xc, yc, xf, yf; cin >> r >> xc >> yc >> xf >> yf;
    long double dx = xf - xc, dy = yf - yc;
    long double d = sqrtl(dx * dx + dy * dy);
    cout << fixed << setprecision(10);
    if(d >= r){
        cout << xc << " " << yc << " " << r << endl;
    }else if(d < 1e-12){
        cout << xc + r / 2 << " " << yc << " " << r / 2 << endl;
    }else{
        long double rad = (r + d) / 2;
        long double ux = -dx / d, uy = -dy / d;
        cout << xf + ux * rad << " " << yf + uy * rad << " " << rad << endl;
    }
    return 0;
}
