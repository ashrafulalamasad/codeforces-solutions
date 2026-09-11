#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    string pi = "3141592653589793238462643383279";
    tc{
        string s; cin >> s; ll ans = 0;
        for(ll i = 0; i < (ll)s.size(); i++){
            if(s[i] == pi[i]){
                ans++;
            }else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
