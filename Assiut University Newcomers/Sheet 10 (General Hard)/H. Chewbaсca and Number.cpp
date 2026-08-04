#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    for(ll i = 0; i < s.size(); i++){
        ll d = s[i] - '0';
        ll inv = 9 - d;
        if(i == 0){
            if(inv < d && inv != 0){
                s[i] = '0' + inv;
            }
        }else{
            if(inv < d){
                s[i] = '0' + inv;
            }
        }
    }
    cout << s << endl;
    return 0;
}
