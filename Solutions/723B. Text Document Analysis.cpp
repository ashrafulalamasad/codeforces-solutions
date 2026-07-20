#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; string s; cin >> n >> s;
	ll maxOutside = 0, insideCount = 0, cur = 0;
	bool inside = false;
	for(char c: s){
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			cur++;
		}else{
			if(cur > 0){
				if(inside) insideCount++; else maxOutside = max(maxOutside, cur);
				cur = 0;
			}
			if(c == '(') inside = true;
			else if(c == ')') inside = false;
		}
	}
	if(cur > 0){
		if(inside) insideCount++; else maxOutside = max(maxOutside, cur);
	}
	cout << maxOutside << " " << insideCount << endl;
	return 0;
}
