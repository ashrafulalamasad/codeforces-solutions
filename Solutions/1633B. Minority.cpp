#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll c0 = 0, c1 = 0;
        for(ll i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                c0++;
            }else{
                c1++;
            }
        }
        if(c0 == c1){
            cout << c0 - 1 << endl;
        }else{
            cout << min(c0, c1) << endl;
        }
    }
    return 0;
}
