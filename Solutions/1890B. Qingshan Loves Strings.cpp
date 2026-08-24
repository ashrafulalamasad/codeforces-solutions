#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; string s, t; cin >> n >> m >> s >> t;
        bool sGood = true;
        for(ll i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]){
                sGood = false;
            }
        }
        if(sGood){
            cout << "YES" << endl;
            continue;
        }
        bool tGood = true;
        for(ll i = 0; i < m - 1; i++){
            if(t[i] == t[i + 1]){
                tGood = false;
            }
        }
        if(!tGood){
            cout << "NO" << endl;
            continue;
        }
        if(t[0] != t[m - 1]){
            cout << "NO" << endl;
            continue;
        }
        char c = t[0];
        bool possible = true;
        for(ll i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1] && s[i] == c){
                possible = false;
            }
        }
        if(possible){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
