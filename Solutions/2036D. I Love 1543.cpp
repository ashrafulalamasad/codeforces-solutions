#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<string> grid(n);
        for(ll i = 0; i < n; i++) cin >> grid[i];
        ll ans = 0, layers = min(n, m) / 2;
        for(ll l = 0; l < layers; l++){
            string s = "";
            for(ll j = l; j < m - l; j++) s += grid[l][j];
            for(ll i = l + 1; i < n - l; i++) s += grid[i][m - 1 - l];
            for(ll j = m - 2 - l; j >= l; j--) s += grid[n - 1 - l][j];
            for(ll i = n - 2 - l; i > l; i--) s += grid[i][l];
            ll len = s.size();
            string doubled = s + s;
            for(ll i = 0; i < len; i++){
                if(doubled[i] == '1' && doubled[i + 1] == '5' && doubled[i + 2] == '4' && doubled[i + 3] == '3'){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
