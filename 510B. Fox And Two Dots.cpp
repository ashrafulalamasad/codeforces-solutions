#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n, m;
vector<string> a;
vector<vector<int>> vis;
bool dfs(ll x, ll y, ll px, ll py, char col, int d){
	vis[x][y] = d;
	int dx[4] = {1, -1, 0, 0};
	int dy[4] = {0, 0, 1, -1};
	for(int k=0; k<4; k++){
		int nx = x + dx[k];
		int ny = y + dy[k];
		if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
		if(a[nx][ny] != col) continue;
		if(nx == px && ny == py) continue;
		if(vis[nx][ny] == 0){
			if(dfs(nx, ny, x, y, col, d+1)) return true;
		} else {
			if(d - vis[nx][ny] + 1 >= 4) return true;
		}
	}
	return false;
}

int main(){
	fast;
	cin >> n >> m;
	a.resize(n);
	for(ll i=0; i<n; i++) cin >> a[i];
	vis.assign(n, vector<int>(m, 0));
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			if(vis[i][j] == 0){
				if(dfs(i, j, -1, -1, a[i][j], 1)){
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
