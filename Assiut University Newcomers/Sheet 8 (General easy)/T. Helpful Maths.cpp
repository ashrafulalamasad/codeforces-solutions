#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll cnt[4] = {0};
    for(char c : s){
        if(c >= '1' && c <= '3') cnt[c - '0']++;
    }
    string ans;
    for(ll i = 1; i <= 3; i++){
        for(ll j = 0; j < cnt[i]; j++){
            if(!ans.empty()) ans += '+';
            ans += (char)('0' + i);
        }
    }
    cout << ans << endl;
    return 0;
}
