#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll best_a = -1, best_b = -1;
    for(ll b = n / 7; b >= 0; b--){
        ll rem = n - 7 * b;
        if(rem % 4 == 0){
            best_a = rem / 4;
            best_b = b;
            break;
        }
    }
    if(best_a == -1){
        cout << -1 << endl;
    }else{
        for(ll i = 0; i < best_a; i++) cout << 4;
        for(ll i = 0; i < best_b; i++) cout << 7;
        cout << endl;
    }
    return 0;
}
