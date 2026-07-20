#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	ll n; cin >> n;
	vector<string> names;
	vector<ll> taxi, pizza, girl;
	taxi.reserve(n); pizza.reserve(n); girl.reserve(n);
	for(ll i=0; i<n; i++){
		ll s; string name; cin >> s >> name;
		names.push_back(name);
		ll tcnt=0, pcnt=0, gcnt=0;
		for(ll j=0; j<s; j++){
			string num; cin >> num;
			string d;
			for(char c: num) if(isdigit(c)) d.push_back(c);
			bool isTaxi = true;
			for(int k=1; k<6; k++) if(d[k] != d[0]) { isTaxi = false; break; }
			if(isTaxi){ tcnt++; continue; }
			bool isPizza = true;
			for(int k=1; k<6; k++) if(!(d[k-1] > d[k])) { isPizza = false; break; }
			if(isPizza){ pcnt++; continue; }
			gcnt++;
		}
		taxi.push_back(tcnt);
		pizza.push_back(pcnt);
		girl.push_back(gcnt);
	}
	ll maxt = *max_element(taxi.begin(), taxi.end());
	ll maxp = *max_element(pizza.begin(), pizza.end());
	ll maxg = *max_element(girl.begin(), girl.end());
	cout << "If you want to call a taxi, you should call: ";
	bool first = true;
	for(ll i=0; i<n; i++){
		if(taxi[i] == maxt){ if(!first) cout << ", "; cout << names[i]; first = false; }
	}
	cout << "." << endl;
	cout << "If you want to order a pizza, you should call: ";
	first = true;
	for(ll i=0; i<n; i++){
		if(pizza[i] == maxp){ if(!first) cout << ", "; cout << names[i]; first = false; }
	}
	cout << "." << endl;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	first = true;
	for(ll i=0; i<n; i++){
		if(girl[i] == maxg){ if(!first) cout << ", "; cout << names[i]; first = false; }
	}
	cout << "." << endl;
	return 0;
}
