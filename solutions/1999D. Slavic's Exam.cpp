#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t; cin >> s >> t;
        ll j = 0;
        for(ll i = 0; i < s.size() && j < t.size(); i++){
            if(s[i] == t[j]){
                j++;
            }else if(s[i] == '?'){
                s[i] = t[j]; j++;
            }
        }
        if(j < t.size()){
            cout << "NO\n";
            continue;
        }
        for(char &c : s){
            if(c == '?'){
                c = 'a';
            }
        }
        cout << "YES\n";
        cout << s << "\n";
    }
    return 0;
}
