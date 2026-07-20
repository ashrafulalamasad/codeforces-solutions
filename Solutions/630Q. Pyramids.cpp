#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ld long double

int main()
{
    fast;
    ld l3, l4, l5; cin >> l3 >> l4 >> l5;
	ld v3 = sqrt((ld)2.0) * l3 * l3 * l3 / (ld)12.0;
	ld v4 = l4 * l4 * l4 / ((ld)3.0 * sqrt((ld)2.0));
	ld pi = acosl((ld)-1.0);
	ld r = l5 / ((ld)2.0 * sinl(pi / (ld)5.0));
	ld h = sqrtl(l5 * l5 - r * r);
	ld area = ((ld)5.0 / (ld)4.0) * l5 * l5 * (cosl(pi / (ld)5.0) / sinl(pi / (ld)5.0));
	ld v5 = area * h / (ld)3.0;
	ld ans = v3 + v4 + v5;
	cout.setf(ios::fixed);
	cout << setprecision(12) << ans << endl;
    return 0;
}
