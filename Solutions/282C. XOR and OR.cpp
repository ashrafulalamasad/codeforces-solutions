#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string a, b; cin >> a >> b;
	if(a == b){
		cout << "YES" << endl;
		return 0;
	}
	if(a.size() != b.size()){
		cout << "NO" << endl;
		return 0;
	}
	bool hasa = false, hasb = false;
	for(char c: a) if(c == '1'){ hasa = true; break; }
	for(char c: b) if(c == '1'){ hasb = true; break; }
	if(hasa && hasb) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
