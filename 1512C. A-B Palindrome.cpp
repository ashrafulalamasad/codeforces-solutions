#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll a, b; string s; cin >> a >> b >> s;
		ll n = s.size();
		for(ll i=0; i<n; i++){
			if(s[i]=='0') a--;
			else if(s[i]=='1') b--;
		}
		bool ok = true;
		if(a<0 || b<0) ok = false;
		for(ll i=0, j=n-1; i<j && ok; i++, j--){
			if(s[i]=='?' && s[j]=='?') continue;
			if(s[i]=='?'){
				s[i]=s[j];
				if(s[i]=='0') a--; else b--;
				if(a<0 || b<0) ok=false;
			}else if(s[j]=='?'){
				s[j]=s[i];
				if(s[j]=='0') a--; else b--;
				if(a<0 || b<0) ok=false;
			}else if(s[i]!=s[j]){
				ok=false;
			}
		}
		for(ll i=0, j=n-1; i<j && ok; i++, j--){
			if(s[i]=='?' && s[j]=='?'){
				if(a>=2){
					s[i]=s[j]='0';
					a-=2;
				}else if(b>=2){
					s[i]=s[j]='1';
					b-=2;
				}else{
					ok=false;
				}
			}
		}
		if(n%2==1 && ok && s[n/2]=='?'){
			if(a>0){
				s[n/2]='0';
				a--;
			}else if(b>0){
				s[n/2]='1';
				b--;
			}else ok=false;
		}
		if(!ok || a!=0 || b!=0) cout << -1 << endl;
		else cout << s << endl;
	}
	return 0;
}
