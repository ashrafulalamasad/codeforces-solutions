#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; string s; cin >> n >> m >> s;
		vector<vector<ll>> a(n, vector<ll>(m));
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cin >> a[i][j];
            }
        }
		vector<ll> row_sum(n, 0), col_sum(m, 0);
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				row_sum[i] += a[i][j];
            }
        }
		for(ll j = 0; j < m; j++){
			for(ll i = 0; i < n; i++){
				col_sum[j] += a[i][j];
            }
        }
		ll r = 0, c = 0;
		for(char ch : s){
			if(ch == 'D'){
				a[r][c] = -row_sum[r];
				col_sum[c] += a[r][c];
				r++;
			}else{
				a[r][c] = -col_sum[c];
				row_sum[r] += a[r][c];
				c++;
			}
		}
		a[n-1][m-1] = -row_sum[n-1];
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < m; j++){
				cout << a[i][j];
				if(j < m - 1) cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
