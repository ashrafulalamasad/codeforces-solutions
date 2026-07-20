#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	long double a, b, c; cin >> a >> b >> c;
	long double D = b * b - 4.0L * a * c;
	long double sd = sqrtl(D);
	long double r1 = (-b + sd) / (2.0L * a);
	long double r2 = (-b - sd) / (2.0L * a);
	if(r1 < r2) swap(r1, r2);
	cout << fixed << setprecision(15) << r1 << endl << r2 << endl;
	return 0;
}
