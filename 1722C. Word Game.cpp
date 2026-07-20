#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n;
		vector<vector<string>> a(3, vector<string>(n));
		map<string, ll> cnt;
		for(ll i = 0; i < 3; i++){
			for(ll j = 0; j < n; j++){
				cin >> a[i][j];
				cnt[a[i][j]]++;
			}
		}
		vector<ll> score(3, 0);
		for(ll i = 0; i < 3; i++){
			for(ll j = 0; j < n; j++){
				if(cnt[a[i][j]] == 1) score[i] += 3;
				else if(cnt[a[i][j]] == 2) score[i] += 1;
			}
		}
		cout << score[0] << " " << score[1] << " " << score[2] << endl;
	}
	return 0;
}
