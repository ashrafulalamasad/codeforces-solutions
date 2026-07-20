#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, cur = 0, mx = 0; cin >> n;
        for(ll i=0; i<n; i++){
            cin >> x;
            if(x == 0){
                cur++;
                mx = max(mx, cur);
            }else{
                cur = 0;
            }
        }
        cout << mx << endl;
    }
    return 0;
}
