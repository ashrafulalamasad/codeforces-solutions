#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    string st = "";
    for(ll i = 0; i < s.size(); i++){
        if(st.size() > 0 && st.back() == s[i]) st.pop_back();
        else st += s[i];
    }
    if(st.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
