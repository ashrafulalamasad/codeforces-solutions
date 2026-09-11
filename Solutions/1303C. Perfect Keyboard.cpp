#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; vector<set<char>> adj(26);
        for(ll i = 0; i + 1 < s.size(); i++){
            adj[s[i] - 'a'].insert(s[i + 1]);
            adj[s[i + 1] - 'a'].insert(s[i]);
        }
        bool ok = true;
        for(ll i = 0; i < 26; i++){
            if(adj[i].size() > 2){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout << "NO" << endl;
            continue;
        }
        set<char> used;
        for(char c : s) used.insert(c);
        string path = "";
        char start = -1;
        for(char c : used){
            if(adj[c - 'a'].size() <= 1){
                start = c;
                break;
            }
        }
        if(start == -1){
            cout << "NO" << endl;
            continue;
        }
        set<char> visited; char cur = start;
        while(true){
            path += cur;
            visited.insert(cur);
            char next = -1;
            for(char nb : adj[cur - 'a']){
                if(visited.find(nb) == visited.end()){
                    next = nb;
                    break;
                }
            }
            if(next == -1) break;
            cur = next;
        }
        string ans = path;
        for(ll i = 0; i < 26; i++){
            char c = 'a' + i;
            if(visited.find(c) == visited.end()){
                ans += c;
            }
        }
        cout << "YES" << endl << ans << endl;
    }
    return 0;
}
