#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n, score = 0; cin >> n;
	string s; cin >> s;
	deque<char> d(s.begin(), s.end());
	while(!d.empty()){
		char c = d.front();
		d.pop_front();
		if(c == 'V') score += 5;
		else if(c == 'W') score += 2;
		else if(c == 'X'){
			if(!d.empty()) d.pop_front();
		}
		else if(c == 'Y'){
			if(!d.empty()){
				char x = d.front();
				d.pop_front();
				d.push_back(x);
			}
		}
		else if(c == 'Z'){
			if(!d.empty()){
				if(d.front() == 'V'){
					score /= 5;
					d.pop_front();
				}else if(d.front() == 'W'){
					score /= 2;
					d.pop_front();
				}
			}
		}
	}
	cout << score << endl;
	return 0;
}
