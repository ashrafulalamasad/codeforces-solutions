#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll a, b, c; cin >> a >> b >> c;
		if(c!=a+1){
			cout<<-1<<endl;
			continue;
		}
		if(a==0){
			cout<<b<<endl;
			continue;
		}
		ll H=0;
		while((1LL<<H)<a+1) H++;
		ll p=1LL<<(H-1);
		ll full=p-1;
		ll rem=a-full;
		ll L1=p-rem;
		ll ans=0;
		if(b<=L1) ans=H;
		else{
			ll b2=b-L1;
			ll leaves=a+1;
			ans=H+(b2+leaves-1)/leaves;
		}
		cout<<ans<<endl;
	}
	return 0;
}
