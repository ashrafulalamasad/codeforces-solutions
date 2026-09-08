#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k; vector<string> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        vector<vector<ll>> dmax(n, vector<ll>(m, 0));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(g[i][j] != '*') continue;
                ll d = 0;
                while(i - d - 1 >= 0 && j - d - 1 >= 0 && j + d + 1 < m && g[i - d - 1][j - d - 1] == '*' && g[i - d - 1][j + d + 1] == '*') d++;
                dmax[i][j] = d;
            }
        }
        ll ok = 1;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(g[i][j] != '*') continue;
                ll cov = 0;
                for(ll h = 0; i + h < n; h++){
                    if(j - h >= 0 && g[i + h][j - h] == '*' && dmax[i + h][j - h] >= max(k, h)) cov = 1;
                    if(j + h < m && g[i + h][j + h] == '*' && dmax[i + h][j + h] >= max(k, h)) cov = 1;
                }
                if(!cov){
                    ok = 0;
                }
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
