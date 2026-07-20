#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    string ans = ""; ll i = 0;
    while(i < s.size()){
        if(s[i] == '.'){
            ans += '0';
            i++;
        }else if(s[i] == '-' && s[i+1] == '.'){
            ans += '1';
            i += 2;
        }else if(s[i] == '-' && s[i+1] == '-'){
            ans += '2';
            i += 2;
        }
    }
    cout << ans << endl;
    return 0;
}
