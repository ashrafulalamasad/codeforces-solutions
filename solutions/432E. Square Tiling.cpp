#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n, m;
vector<string> grid;

bool isValid(ll r, ll c, ll sz, char ch){
    if(r + sz > n || c + sz > m) return false;
    for(ll i = 0; i < sz; i++){
        for(ll j = 0; j < sz; j++){
            if(grid[r + i][c + j] != '.') return false;
        }
    }
    for(ll k = 0; k < sz; k++){
        if(r > 0 && grid[r - 1][c + k] == ch) return false;
        if(r + sz < n && grid[r + sz][c + k] == ch) return false;
        if(c > 0 && grid[r + k][c - 1] == ch) return false;
        if(c + sz < m && grid[r + k][c + sz] == ch) return false;
    }
    return true;
}

int main()
{
    fast;
    cin >> n >> m;
    grid.assign(n, string(m, '.'));
    for(ll r = 0; r < n; r++){
        for(ll c = 0; c < m; c++){
            if(grid[r][c] != '.') continue;
            char ch = 'A';
            while(!isValid(r, c, 1, ch)){
                ch++;
            }
            ll sz = 1;
            while(true){
                if(ch == 'A'){
                    if(isValid(r, c, sz + 1, ch)) {
                        sz++;
                    }else{
                        break;
                    }
                }else if (ch == 'B'){
                    if(isValid(r, c, sz + 1, ch) && r > 0 && grid[r - 1][c + sz] == 'A') {
                        sz++;
                    }else{
                        break;
                    }
                }else{
                    break;
                }
            }
            for(ll i = 0; i < sz; i++){
                for(ll j = 0; j < sz; j++){
                    grid[r + i][c + j] = ch;
                }
            }
        }
    }
    for(ll r = 0; r < n; r++){
        cout << grid[r] << endl;
    }
    return 0;
}
