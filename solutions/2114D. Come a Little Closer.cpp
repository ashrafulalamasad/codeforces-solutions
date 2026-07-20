#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<pair<ll,ll>> p(n);
		for(ll i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
		if(n == 1){ cout << 1 << endl; continue; }
		ll minx = LLONG_MAX, maxx = LLONG_MIN, miny = LLONG_MAX, maxy = LLONG_MIN;
		for(auto &q : p){
			minx = min(minx, q.first); maxx = max(maxx, q.first);
			miny = min(miny, q.second); maxy = max(maxy, q.second);
		}
		ll best = (maxx - minx + 1) * (maxy - miny + 1);
		ll cnt_minx = 0, cnt_maxx = 0, cnt_miny = 0, cnt_maxy = 0;
		ll sec_minx = LLONG_MAX, sec_maxx = LLONG_MIN;
		ll sec_miny = LLONG_MAX, sec_maxy = LLONG_MIN;
		for(auto &q : p){
			ll x = q.first, y = q.second;
			if(x == minx) cnt_minx++; else sec_minx = min(sec_minx, x);
			if(x == maxx) cnt_maxx++; else sec_maxx = max(sec_maxx, x);
			if(y == miny) cnt_miny++; else sec_miny = min(sec_miny, y);
			if(y == maxy) cnt_maxy++; else sec_maxy = max(sec_maxy, y);
		}
		for(auto &q : p){
			ll x = q.first, y = q.second;
			ll lx = (x == minx && cnt_minx == 1) ? sec_minx : minx;
			ll rx = (x == maxx && cnt_maxx == 1) ? sec_maxx : maxx;
			ll ly = (y == miny && cnt_miny == 1) ? sec_miny : miny;
			ll ry = (y == maxy && cnt_maxy == 1) ? sec_maxy : maxy;
			ll w = rx - lx + 1, h = ry - ly + 1, rem = n - 1;
			if(w * h > rem) best = min(best, w * h);
			else best = min(best, w * h + min(w, h));
		}
		cout << best << endl;
	}
	return 0;
}
