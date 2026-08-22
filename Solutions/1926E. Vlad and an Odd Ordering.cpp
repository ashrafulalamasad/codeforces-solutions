#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll p = 1;
        while(true){
            ll cnt = (n / p + 1) / 2;
            if(k > cnt){
                k -= cnt;
                p *= 2;
            }else{
                cout << p * (2 * k - 1) << endl;
                break;
            }
        }
    }
    return 0;
}
