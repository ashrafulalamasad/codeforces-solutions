#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int k; cin >> k;
    string s; cin >> s;
    int n = s.size();
    for(int i=0; i < (n+1)/2; i++){
        if(s[i]!='?' && s[n-1-i]!='?' && s[i]!=s[n-1-i]){
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
        if(s[i]=='?' && s[n-1-i]!='?') s[i] = s[n-1-i];
        else if(s[i]!='?' && s[n-1-i]=='?') s[n-1-i] = s[i];
    }
    vector<bool> present(k, false);
    vector<int> free_pos;
    for(int i=0; i < (n+1)/2; i++){
        if(s[i]=='?') free_pos.push_back(i);
        else present[s[i]-'a'] = true;
    }
    vector<char> missing;
    for(int i=0; i<k; i++) if(!present[i]) missing.push_back('a'+i);
    if((int)missing.size() > (int)free_pos.size()){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    for(int i=0; i<(int)free_pos.size(); i++){
        int j = free_pos[i];
        s[j] = s[n-1-j] = 'a';
    }
    int fi = (int)free_pos.size() - (int)missing.size();
    for(int i=0; i<(int)missing.size(); i++){
        int pos = free_pos[fi+i];
        s[pos] = s[n-1-pos] = missing[i];
    }
    cout << s << endl;
    return 0;
}
