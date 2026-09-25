#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, cnt = 0; cin >> n >> k;
    ll idx[101] = {0};
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(idx[x] == 0){
            idx[x] = i + 1;
            cnt++;
        }
    }
    if(cnt < k) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        for(ll v = 1; v <= 100 && k > 0; v++){
            if(idx[v] > 0){
                cout << idx[v] << " ";
                k--;
            }
        }
        cout << endl;
    }
    return 0;
}
