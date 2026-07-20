#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n; string s; cin >> n >> s;
		ll balance = 0, moves = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '(') balance++;
			else balance--;
			if(balance < 0){
				moves -= balance;
				balance = 0;
			}
		}
		cout << moves << endl;
	}
	return 0;
}
