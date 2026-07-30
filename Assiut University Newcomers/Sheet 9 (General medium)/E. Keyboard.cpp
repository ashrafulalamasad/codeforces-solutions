#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char,ll> pos;
    for(ll i = 0; i < kb.size(); i++) pos[kb[i]] = i;
    char dir; string s;
    cin >> dir >> s;
    for(char c : s){
        if(dir == 'R') cout << kb[pos[c] - 1];
        else cout << kb[pos[c] + 1];
    }
    cout << endl;
    return 0;
}
