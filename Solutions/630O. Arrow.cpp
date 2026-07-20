#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ld long double

int main()
{
	fast;
	ld px, py, vx, vy, a, b, c, d;
	cin >> px >> py >> vx >> vy >> a >> b >> c >> d;
	ld len = sqrtl(vx*vx + vy*vy);
	ld ux = vx / len;
	ld uy = vy / len;
	ld perp_x = -uy;
	ld perp_y = ux;
	ld halfA = a / 2.0L;
	ld halfC = c / 2.0L;
	vector<pair<ld,ld>> pts;
	pts.push_back({px + ux * b, py + uy * b});
	pts.push_back({px + perp_x * halfA, py + perp_y * halfA});
	pts.push_back({px + perp_x * halfC, py + perp_y * halfC});
	pts.push_back({px + perp_x * halfC - ux * d, py + perp_y * halfC - uy * d});
	pts.push_back({px - perp_x * halfC - ux * d, py - perp_y * halfC - uy * d});
	pts.push_back({px - perp_x * halfC, py - perp_y * halfC});
	pts.push_back({px - perp_x * halfA, py - perp_y * halfA});
	cout<<fixed<<setprecision(12);
	for(auto &pr: pts) cout<< (double)pr.first << " " << (double)pr.second << endl;
	return 0;
}
