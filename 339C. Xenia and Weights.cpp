#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s;
ll m;
vector<ll> w;
bool vis[1001][11][11];
vector<ll> ans;
bool dfs(ll pos, ll rem, ll last)
{
    if(pos==m) return true;
    if(vis[pos][rem][last]) return false;
    vis[pos][rem][last] = true;
    for(ll i=0; i<w.size(); i++){
        if(w[i]!=last&&w[i]>rem){
            ans.push_back(w[i]);
            if(dfs(pos+1, w[i]-rem, w[i])) return true;
            ans.pop_back();
        }
    }
    return false;
}

int main()
{
    fast;
    cin >> s >> m;
    for(ll i=0; i<10; i++) if(s[i]=='1') w.push_back(i+1);
    if(dfs(0, 0, 0)){
        cout << "YES" << endl;
        for(ll i=0; i<m; i++) cout << ans[i] << " ";
        cout << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
