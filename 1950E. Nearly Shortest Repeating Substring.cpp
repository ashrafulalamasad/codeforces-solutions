#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; string s; cin >> n >> s; vector<ll> divs;
		for(ll i=1;i*i<=n;i++) if(n%i==0){
			divs.push_back(i);
			if(i*i!=n) divs.push_back(n/i);
		}
		sort(divs.begin(), divs.end());
		ll ans=n;
		for(ll L:divs){
			ll size=n/L;
			array<ll,26> zeros{};
			vector<array<ll,26>> cnt(L, zeros);
			vector<ll> mx(L,0);
			for(ll i=0;i<n;i++){
				ll r=i%L;
				ll idx=s[i]-'a';
				cnt[r][idx]++;
				if(cnt[r][idx]>mx[r]) mx[r]=cnt[r][idx];
			}
			ll mismatches=0;
			for(ll r=0;r<L;r++){
				mismatches += size - mx[r];
				if(mismatches>1) break;
			}
			if(mismatches<=1){ ans=L; break; }
		}
		cout<<ans<<endl;
	}
	return 0;
}
