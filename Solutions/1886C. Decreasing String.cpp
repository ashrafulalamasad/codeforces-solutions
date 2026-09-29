#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; ll pos; cin >> s >> pos; pos--;
        ll len = s.size();
        vector<char> st;
        bool found = pos < len;
        s += '$';
        for(ll i = 0; i < (ll)s.size(); i++){
            char c = s[i];
            while(!found && !st.empty() && st.back() > c){
                pos -= len;
                len--;
                st.pop_back();
                if(pos < len) found = true;
            }
            st.push_back(c);
        }
        cout << st[pos];
    }
    return 0;
}
