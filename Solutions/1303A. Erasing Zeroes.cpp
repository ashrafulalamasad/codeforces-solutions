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
        ll first = -1, last = -1;
        for(ll i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                if(first == -1) first = i;
                last = i;
            }
        }
        if(first == -1){
            cout << 0 << endl;
        }else{
            ll cnt = 0;
            for(ll i = first; i <= last; i++){
                if(s[i] == '0') cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
