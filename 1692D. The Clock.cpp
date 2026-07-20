#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; ll x; cin >> s >> x;
        ll start = ((s[0]-'0')*10 + (s[1]-'0')) * 60 + (s[3]-'0')*10 + (s[4]-'0');
        set<ll> st; ll cnt = 0;
        for(ll cur = start; ; cur = (cur + x) % 1440){
            if(st.count(cur)) break;
            st.insert(cur);
            ll h = cur / 60, m = cur % 60;
            if(h/10 == m%10 && h%10 == m/10) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
