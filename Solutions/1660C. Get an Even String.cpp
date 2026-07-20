#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    tc{
        string s; cin >> s;
        set<char> st;
        ll ans = 0;
        for(auto &c : s){
            if(st.count(c)){
                ans += 2;
                st.clear();
            }
            else st.insert(c);
        }
        cout << s.size() - ans << endl;
    }
    return 0;
}
