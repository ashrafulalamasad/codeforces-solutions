#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll maxN=100000;
	vector<ll> nums;
	queue<ll> q;
	q.push(1);
	while(!q.empty()){
		ll x=q.front(); q.pop();
		nums.push_back(x);
		if(x*10<=maxN) q.push(x*10);
		if(x*10+1<=maxN) q.push(x*10+1);
	}
	vector<ll> list;
	for(ll x:nums) if(x>1) list.push_back(x);
	sort(list.begin(), list.end());
	vector<ll> dp(maxN+1,0);
	dp[1]=1;
	for(ll i=1;i<=maxN;i++) if(dp[i]){
		for(ll b:list){
			ll v=i*b;
			if(v>maxN) break;
			dp[v]=1;
		}
	}
	tc{
		ll n; cin >> n;
		if(dp[n]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
