#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, carry = 0; cin >> x; vector<ll> a(32, 0);
        for(ll i = 0; i < 32; i++){
            ll total = ((x >> i) & 1) + carry;
            ll nxt = (i + 1 < 32) ? ((x >> (i + 1)) & 1) : 0;
            if(total == 0){
                a[i] = 0;
                carry = 0;
            }else if(total == 2){
                a[i] = 0;
                carry = 1;
            }else if(nxt == 1){
                a[i] = -1;
                carry = 1;
            }else{
                a[i] = 1;
                carry = 0;
            }
        }
        cout << 32 << endl;
        for(ll i = 0; i < 32; i++){
            if(i > 0) cout << " ";
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
