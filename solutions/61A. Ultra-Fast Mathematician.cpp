#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s1, s2, ans; cin >> s1 >> s2;
    for(ll i=0; i<s1.size(); i++){
        if(s1[i]!=s2[i]){
            ans += '1';
        }else{
            ans += '0';
        }
    }
    cout << ans << endl;
    return 0;
}
