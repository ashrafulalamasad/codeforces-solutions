#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    double x, p; cin >> x >> p;
    double ans = p * 100 / (100 - x);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}
