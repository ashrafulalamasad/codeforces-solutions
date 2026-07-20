#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n; cin >> n;
		vector<string> g(n);
		ll x1=-1,y1=-1,x2=-1,y2=-1;
		for(int i=0; i<n; i++){
			cin >> g[i];
			for(int j=0; j<n; j++){
				if(g[i][j]=='*'){
					if(x1==-1){ x1=i; y1=j; }
					else{ x2=i; y2=j; }
				}
			}
		}
		if(x1==x2){
			ll r = (x1==0) ? 1 : 0;
			g[r][y1] = '*';
			g[r][y2] = '*';
		}else if(y1==y2){
			ll c = (y1==0) ? 1 : 0;
			g[x1][c] = '*';
			g[x2][c] = '*';
		}else{
			g[x1][y2] = '*';
			g[x2][y1] = '*';
		}
		for(int i=0; i<n; i++) cout << g[i] << endl;
	}
	return 0;
}
