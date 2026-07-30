#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    double subX = pow(x1 - x2, 2);
    double subY = pow(y1 - y2, 2);
    double result = sqrt(subX + subY);
    cout << fixed << setprecision(9) << result << endl;
    return 0;
}
