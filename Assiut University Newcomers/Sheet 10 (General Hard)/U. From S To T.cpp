#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t, p; cin >> s >> t >> p;
        ll i = 0;
        for(char c : t){
            if(i < s.size() && s[i] == c) i++;
        }
        if(i != s.size()){
            cout << "NO" << endl;
            continue;
        }
        ll cntS[26] = {0}, cntT[26] = {0}, cntP[26] = {0};
        for(char c : s) cntS[c - 'a']++;
        for(char c : t) cntT[c - 'a']++;
        for(char c : p) cntP[c - 'a']++;
        bool ok = true;
        for(ll j = 0; j < 26; j++){
            if(cntT[j] > cntS[j] && cntP[j] < cntT[j] - cntS[j]){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
