#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll px, py; cin >> px >> py;
        ll ax, ay; cin >> ax >> ay;
        ll bx, by; cin >> bx >> by;
        auto dist = [&](ll x1, ll y1, ll x2, ll y2) -> double {
            return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        };
        double pa = dist(px, py, ax, ay), pb = dist(px, py, bx, by);
        double oa = dist(0, 0, ax, ay), ob = dist(0, 0, bx, by);
        double ab = dist(ax, ay, bx, by);
        double ans = min({max(pa, oa), max(pb, ob), max({ab / 2, pa, ob}), max({ab / 2, pb, oa})});
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}
