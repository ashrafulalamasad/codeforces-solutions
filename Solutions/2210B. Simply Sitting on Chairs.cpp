#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct BIT{
	ll n; vector<ll>bit;
	BIT(ll n=0){init(n);}
	void init(ll n_){n=n_;bit.assign(n+1,0);}
	void add(ll idx,ll val){
		for(;idx<=n;idx+=idx&-idx)bit[idx]+=val;
	}
	ll sum(ll idx){
		ll s=0;
		for(;idx>0;idx-=idx&-idx)s+=bit[idx];
		return s;
	}
	ll range(ll l,ll r){
		if(l>r)return 0;
		return sum(r)-sum(l-1);
	}
};

int main()
{
	fast;
	tc{
		ll n; cin>>n;
		vector<ll>p(n+1),pos(n+1),pref(n+1,0);
		for(ll i=1;i<=n;i++){
			cin>>p[i];
			pos[p[i]]=i;
		}
		for(ll i=1;i<=n;i++)pref[i]=pref[i-1]+(p[i]<=i);
		BIT fw(n);
		ll ans=pref[n];
		for(ll m=2;m<=n;m++){
			fw.add(p[m-1],1);
			if(pos[m]>=m)continue;
			ll a=pref[m-1];
			ll b=fw.range(m,n);
			ans=max(ans,a+b);
		}
		cout<<ans<<endl;
	}
	return 0;
}
