#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k, x, a; cin >> k >> x >> a;
        ll sum = 0, ok = 1;
        for(ll i = 0; i <= x; i++){
            ll bet = sum / (k - 1) + 1;
            sum = sum + bet;
            if(sum > a){
                ok = 0;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
