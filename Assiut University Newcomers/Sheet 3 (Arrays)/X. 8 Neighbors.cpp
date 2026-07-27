#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<string> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll x, y; cin >> x >> y; x--; y--;
    ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(ll i = 0; i < 8; i++){
        ll nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m){
            if(arr[nx][ny] != 'x'){
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}
