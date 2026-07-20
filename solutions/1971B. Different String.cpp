#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
	fast;
	tc{
		string s; cin >> s;
		string r = s;
		bool found = false;
		sort(r.begin(), r.end());
		if(r == s){
			while(next_permutation(r.begin(), r.end())){
				if(r != s){
					found = true;
					break;
				}
			}
			if(found){
				cout << "YES" << endl;
				cout << r << endl;
			}else cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
			cout << r << endl;
		}
	}
    return 0;
}
