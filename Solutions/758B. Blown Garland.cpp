#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    string s; cin >> s;
    ll n = s.size();
    char col[4] = {};
    for(ll i = 0; i < n; ++i){
        if(s[i] != '!') col[i % 4] = s[i];
    }
    ll r = 0, b = 0, y = 0, g = 0;
    for(ll i = 0; i < n; ++i){
        if(s[i] == '!'){
            char c = col[i % 4];
            if(c == 'R') ++r;
            else if(c == 'B') ++b;
            else if(c == 'Y') ++y;
            else ++g;
        }
    }
    cout << r << " " << b << " " << y << " " << g << endl;
    return 0;
}
