#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        vector<char> ch; vector<ll> len;
        ch.reserve(n); len.reserve(n);
        for(ll i = 0; i < n; i++){
            if(!ch.empty() && ch.back() == s[i]){
                len.back()++;
            }else{
                ch.push_back(s[i]);
                len.push_back(1);
            }
        }
        ll k = ch.size();
        if(k == 1){
            cout << 1 << endl;
            continue;
        }
        ll ans = LLONG_MAX;
        if(len[0] > 1) ans = min(ans, k);
        if(len[k-1] > 1) ans = min(ans, k);
        for(ll j = 1; j <= k-2; j++){
            if(len[j] > 1){
                ans = min(ans, k);
            }else{
                if(ch[j-1] == ch[j+1]){
                    ans = min(ans, k-2);
                }else{
                    ans = min(ans, k-1);
                }
            }
        }
        cout << ans << endl;
    }
}
