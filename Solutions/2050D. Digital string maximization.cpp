#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size();
        for(ll i = 0; i < n; i++){
            ll best = i, bestVal = s[i] - '0';
            for(ll j = i + 1; j < n && j < i + 10; j++){
                if(s[j] == '0') continue;
                ll cur = (s[j] - '0') - (j - i);
                if(cur < 0) continue;
                if(cur > bestVal){
                    bestVal = cur;
                    best = j;
                }
            }
            if(best != i){
                char c = char('0' + bestVal);
                for(ll k = best; k > i; k--){
                    s[k] = s[k - 1];
                }
                s[i] = c;
            }
        }
        cout << s << endl;
    }
    return 0;
}
