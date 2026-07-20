#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, r, avg; cin >> n >> r >> avg;
	ll needed = n * avg, current = 0;
	vector<pair<ll, ll>> grades;
	for(ll i = 0; i < n; i++){
		ll a, b; cin >> a >> b;
		current += a;
		ll can_increase = r - a;
		if(can_increase > 0) grades.push_back({b, can_increase});
	}
	if(current >= needed){
		cout << 0 << endl;
		return 0;
	}
	sort(grades.begin(), grades.end());
	ll essays = 0, deficit = needed - current;
	for(auto& p : grades){
		ll essay_cost = p.first;
		ll can_increase = p.second;
		ll increase = min(can_increase, deficit);
		essays += increase * essay_cost;
		deficit -= increase;
		if(deficit == 0) break;
	}
	cout << essays << endl;
	return 0;
}
