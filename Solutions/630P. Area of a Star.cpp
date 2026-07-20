#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, r; cin >> n >> r;
    ll k = (n-1)/2;
    long double pi = acosl(-1.0L);
    long double cot = cosl(pi/n)/sinl(pi/n);
    long double tanv = tanl(k*pi/n);
    long double area = n*1.L*r*r/(cot+tanv);
    cout << fixed << setprecision(12) << area <<endl;
    return 0;
}
