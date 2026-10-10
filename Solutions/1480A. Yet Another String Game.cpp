#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll n = s.size();
        for(ll i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s[i] == 'a') s[i] = 'b'; else s[i] = 'a';
            }else{
                if(s[i] == 'z') s[i] = 'y'; else s[i] = 'z';
            }
        }
        cout << s << endl;
    }
    return 0;
}
