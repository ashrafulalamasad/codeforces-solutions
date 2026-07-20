#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll count = 0; char prev = s[0];
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == prev){
            count++;
        }else{
            prev = s[i];
            count = 1;
        }
        if(count >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
