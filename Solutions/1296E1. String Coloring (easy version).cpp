#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s; vector<vector<ll>> graph(n);
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1; j < n; j++){
            if(s[i] > s[j]){
                graph[i].push_back(j); graph[j].push_back(i);
            }
        }
    }
    vector<ll> color(n, -1);
    for(ll start = 0; start < n; start++){
        if(color[start] != -1) continue;
        queue<ll> q; q.push(start);
        color[start] = 0;
        while(!q.empty()){
            ll current = q.front(); q.pop();
            for(ll next : graph[current]){
                if(color[next] == -1){
                    color[next] = color[current] ^ 1;
                    q.push(next);
                }else if(color[next] == color[current]){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    for(ll value : color) cout << value;
    cout << endl;
    return 0;
}
