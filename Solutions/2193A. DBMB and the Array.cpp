#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s, x; cin >> n >> s >> x;
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            ll v; cin >> v;
            sum += v;
        }
        if(s >= sum && (s - sum) % x == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
