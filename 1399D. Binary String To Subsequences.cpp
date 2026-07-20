#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
	fast;
	tc{
		ll n, cur = 0; string s; cin >> n >> s;
		vector<ll> ans(n); stack<ll> zero, one;
		for(ll i=0; i<n; i++){
			if(s[i] == '0'){
				if(one.empty()){
					zero.push(++cur);
					ans[i] = cur;
				}else{
					ll id = one.top(); one.pop();
					zero.push(id);
					ans[i] = id;
				}
			}else{
				if(zero.empty()){
					one.push(++cur);
					ans[i] = cur;
				}else{
					ll id = zero.top(); zero.pop();
					one.push(id);
					ans[i] = id;
				}
			}
		}
		cout << cur << endl;
		for(ll i=0; i<n; i++) cout << ans[i] << " \n"[i==n-1];
	}
	return 0;
}
