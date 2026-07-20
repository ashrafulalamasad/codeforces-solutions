#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll m, n; cin >> m >> n;
	vector<vector<ll>> b(m, vector<ll>(n));
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++) cin >> b[i][j];
	}
	vector<vector<ll>> a(m, vector<ll>(n, 1));
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++){
			if(b[i][j] == 0){
				for(ll k=0; k<n; k++) a[i][k] = 0;
				for(ll k=0; k<m; k++) a[k][j] = 0;
			}
		}
	}
	vector<ll> row(m, 0), col(n, 0);
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++){
			if(a[i][j] == 1){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	vector<vector<ll>> c(m, vector<ll>(n, 0));
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++) c[i][j] = (row[i] || col[j]);
	}
	if(c != b){
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++){
			if(j) cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
