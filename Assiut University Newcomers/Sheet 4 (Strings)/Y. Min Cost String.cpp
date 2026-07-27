#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	string s; cin >> s; vector<ll> cost(26);
	for(ll i = 0; i < 26; i++) cin >> cost[i];
	string res;
	for(ll i = 0; i < s.size(); ){
		if(s[i] != '?'){
			res += s[i];
			i++;
			continue;
		}
		ll j = i;
		while(j < s.size() && s[j] == '?') j++;
		bool hasLeft = !res.empty();
		bool hasRight = j < s.size();
		char fill = 'a';
		if(hasLeft && !hasRight){
			ll target = cost[res.back() - 'a'];
			for(char c = 'a'; c <= 'z'; c++){
				if(cost[c - 'a'] == target){
					fill = c;
					break;
				}
			}
		}else if(!hasLeft && hasRight){
			ll target = cost[s[j] - 'a'];
			for(char c = 'a'; c <= 'z'; c++){
				if(cost[c - 'a'] == target){
					fill = c;
					break;
				}
			}
		}else if(hasLeft && hasRight){
			ll low = min(cost[res.back() - 'a'], cost[s[j] - 'a']);
			ll high = max(cost[res.back() - 'a'], cost[s[j] - 'a']);
			for(char c = 'a'; c <= 'z'; c++){
				if(cost[c - 'a'] >= low && cost[c - 'a'] <= high){
					fill = c;
					break;
				}
			}
		}
		res.append(j - i, fill);
		i = j;
	}
	ll ans = 0;
	for(ll i = 1; i < res.size(); i++){
        ans += llabs(cost[res[i] - 'a'] - cost[res[i - 1] - 'a']);
	}
	cout << ans << endl << res << endl;
	return 0;
}
