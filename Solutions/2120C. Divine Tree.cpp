#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; cin >> n >> m;
		if(m < n || m > n * (n + 1) / 2){
			cout << -1 << endl;
			continue;
		}
		ll root = -1;
		for(ll r = 1; r <= n; r++){
			ll rem = m - r;
			if(rem < n - 1) continue;
			ll mx = (r - 1) * r / 2 + (n - r) * r;
			if(rem <= mx){ root = r; break; }
		}
		if(root < 0){ cout << -1 << endl; continue; }
		cout << root << endl;
		if(n == 1) continue;
		vector<pair<ll,int>> gains;
		for(int i = 1; i <= n; i++)
			if(i != root)
				gains.emplace_back(min((ll)i, root) - 1, i);
		sort(gains.begin(), gains.end(), greater<>());
		ll rem = m - root - (n - 1);
		vector<char> used(n + 1), direct(n + 1);
		used[root] = 1;
		for(auto &p : gains){
			if(rem <= 0) break;
			if(rem >= p.first){
				direct[p.second] = 1;
				rem -= p.first;
			}
		}
		int pivot = (root == 1 ? 2 : 1);
		used[pivot] = 1;
		vector<pair<int,int>> edges;
		edges.emplace_back(root, pivot);
		for(int i = 1; i <= n; i++)
			if(i != root && !used[i] && direct[i]){
				edges.emplace_back(root, i);
				used[i] = 1;
			}
		for(int i = 1; i <= n; i++)
			if(i != root && !used[i]){
				edges.emplace_back(pivot, i);
				used[i] = 1;
			}
		for(auto &e : edges)
			cout << e.first << " " << e.second << endl;
	}
	return 0;
}
