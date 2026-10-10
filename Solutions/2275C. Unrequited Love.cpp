#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; cin >> n; vector<ll> a(n + 1);
		for(ll i = 1; i <= n; i++) cin >> a[i];
		vector<ll> value(n + 1), frequency(60001);
		ll answer = 0;
		for(ll i = 1; i <= n - 4; i++){
			value[i] = a[i] + a[i + 2] - a[i + 4];
			answer += frequency[value[i] + 30000];
			if(i >= 3 && value[i - 2] == value[i]) answer--;
			if(i >= 5 && value[i - 4] == value[i]) answer--;
			frequency[value[i] + 30000]++;
		}
		cout << answer << endl;
	}
	return 0;
}
