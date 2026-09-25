#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string s, st; cin >> s;
        for(ll i = 0; i < n; i++){
            if(!st.empty() && st.back() == s[i]) st.pop_back();
            else st.push_back(s[i]);
        }
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
