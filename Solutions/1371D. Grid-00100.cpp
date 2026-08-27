#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<string> grid(n, string(n, '0'));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(k > 0 && (j - i + n) % n < k / n){
                    grid[i][j] = '1';
                }
            }
        }
        for(ll i = 0; i < k % n; i++){
            grid[i][(i + k / n) % n] = '1';
        }
        cout << (k % n == 0 ? 0 : 2) << endl;
        for(ll i = 0; i < n; i++) cout << grid[i] << endl;
    }
    return 0;
}
