#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        string s; char c; cin >> s >> c;
        bool ok = false;
        for(ll i = 0; i < s.size(); i += 2){
            if(s[i] == c) ok = true;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
