#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        vector<string> g(3);
        for(ll i = 0; i < 3; i++) cin >> g[i];
        string win = "DRAW";
        for(ll i = 0; i < 3; i++){
            if(g[i][0] != '.' && g[i][0] == g[i][1] && g[i][1] == g[i][2]){
                win = string(1, g[i][0]);
            }
            if(g[0][i] != '.' && g[0][i] == g[1][i] && g[1][i] == g[2][i]){
                win = string(1, g[0][i]);
            }
        }
        if(g[0][0] != '.' && g[0][0] == g[1][1] && g[1][1] == g[2][2]){
            win = string(1, g[0][0]);
        }
        if(g[0][2] != '.' && g[0][2] == g[1][1] && g[1][1] == g[2][0]){
            win = string(1, g[0][2]);
        }
        cout << win << endl;
    }
    return 0;
}
