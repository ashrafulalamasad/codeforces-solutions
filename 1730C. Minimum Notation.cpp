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
        vector<ll> mn(n+1, 10);
        for(ll i = n - 1; i >= 0; i--){
            mn[i] = min(mn[i+1], (ll)(s[i]-'0'));
        }
        string unop;
        vector<ll> bag;
        for(ll i = 0; i < n; i++){
            ll d = s[i]-'0';
            if(d > mn[i+1]){
                bag.push_back(min(d+1, 9LL));
            }else{
                unop += s[i];
            }
        }
        sort(bag.begin(), bag.end());
        string ans;
        ll i=0, j=0;
        while(i < unop.size() && j < bag.size()){
            if(unop[i]-'0' <= bag[j]){
                ans += unop[i];
                i++;
            }else{
                ans += char('0' + bag[j]);
                j++;
            }
        }
        while(i < unop.size()){
            ans += unop[i];
            i++;
        }
        while(j < bag.size()){
            ans += char('0' + bag[j]);
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}
