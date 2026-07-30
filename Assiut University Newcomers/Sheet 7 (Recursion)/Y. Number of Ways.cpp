#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll ways(ll s, ll e){
	if(s == e) return 1;
	if(s > e) return 0;
	return ways(s + 1, e) + ways(s + 2, e) + ways(s + 3, e);
}

int main()
{
	fast;
	ll s, e; cin >> s >> e;
	cout << ways(s, e) << endl;
	return 0;
}
