#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n; vector<string> s(n);
	for(ll i=0; i<n; i++) cin >> s[i];
	vector<vector<int>> g(26);
	vector<ll> indeg(26, 0);
	vector<vector<bool>> has(26, vector<bool>(26,false));
	for(ll i=0; i+1<n; i++){
		string &a = s[(size_t)i];
		string &b = s[(size_t)(i+1)];
		ll L = min((ll)a.size(), (ll)b.size());
		ll j = 0;
		while(j < L && a[(size_t)j] == b[(size_t)j]) j++;
		if(j == L){
			if(a.size() > b.size()){ cout << "Impossible" << endl; return 0; }
		} else {
			int u = a[(size_t)j] - 'a';
			int v = b[(size_t)j] - 'a';
			if(!has[u][v]){ g[u].push_back(v); has[u][v] = true; indeg[v]++; }
		}
	}
	queue<int> q;
	for(int i=0; i<26; i++) if(indeg[i] == 0) q.push(i);
	string ans = "";
	while(!q.empty()){
		int v = q.front(); q.pop();
		ans.push_back((char)('a' + v));
		for(int to: g[v]){
			indeg[to]--;
			if(indeg[to] == 0) q.push(to);
		}
	}
	if((ll)ans.size() != 26){ cout << "Impossible" << endl; return 0; }
	cout << ans << endl;
	return 0;
}
