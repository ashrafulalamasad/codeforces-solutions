#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, s, r; cin >> n >> s >> r;
        ll mx = s - r, rem = r;
        cout << mx;
        for(ll i = 0; i < n - 2; i++){
            ll val = min(mx, rem - (n - 2 - i));
            cout << " " << val;
            rem -= val;
        }
        if(n > 1){
            cout << " " << rem;
        }
        cout << endl;
    }
    return 0;
}
