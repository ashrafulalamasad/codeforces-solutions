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
        set<string> st;
        for(ll i = 1; i < n; i++){
            string cur = "";
            cur = cur + s[i - 1] + s[i];
            st.insert(cur);
        }
        cout << st.size() << endl;
    }
    return 0;
}
