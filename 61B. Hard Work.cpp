#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string norm(const string &s){
	string t;
	for(char ch: s){
		if(ch=='-'||ch==';'||ch=='_') continue;
		t.push_back(tolower((unsigned char)ch));
	}
	return t;
}

int main(){
	fast;
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	vector<string> a(3);
	a[0]=norm(s1);
	a[1]=norm(s2);
	a[2]=norm(s3);
	vector<string> perms;
	vector<int> idx={0,1,2};
	do{
		string cat=a[idx[0]]+a[idx[1]]+a[idx[2]];
		perms.push_back(cat);
	}while(next_permutation(idx.begin(), idx.end()));
	sort(perms.begin(), perms.end());
	perms.erase(unique(perms.begin(), perms.end()), perms.end());
	ll n;
	if(!(cin>>n)) return 0;
	string line;
	getline(cin,line);
	for(ll i=0; i<n; i++){
		string ans;
		getline(cin,ans);
		string t=norm(ans);
		bool ok=binary_search(perms.begin(), perms.end(), t);
		if(ok) cout<<"ACC"<<endl; else cout<<"WA"<<endl;
	}
	return 0;
}
