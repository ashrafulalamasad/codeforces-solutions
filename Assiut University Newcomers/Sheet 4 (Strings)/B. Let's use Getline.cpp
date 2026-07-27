#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; getline(cin, s);
	for(char c : s){
        if(c == '\\') break;
        else cout << c;
    }
	return 0;
}
