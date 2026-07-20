#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	ll na, ma;
	if(!(cin >> na >> ma)) return 0;
	vector<string> a(na);
	for(ll i=0; i<na; i++) cin >> a[i];
	ll nb, mb; cin >> nb >> mb;
	vector<string> b(nb);
	for(ll i=0;i<nb;i++) cin>>b[i];
	ll best = -1;
	ll bestx = 0, besty = 0;
	for(ll x = -na + 1; x <= nb - 1; x++){
		for(ll y = -ma + 1; y <= mb - 1; y++){
			ll cur = 0;
			for(ll i=0;i<na;i++){
				ll ii = i + x;
				if(ii < 0 || ii >= nb) continue;
				for(ll j=0; j<ma; j++){
					ll jj = j + y;
					if(jj < 0 || jj >= mb) continue;
					if(a[i][j]=='1' && b[ii][jj]=='1') cur++;
				}
			}
			if(cur > best){
				best = cur;
				bestx = x;
				besty = y;
			}
		}
	}
	cout<<bestx<<" "<<besty<<endl;
	return 0;
}
